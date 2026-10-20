# Check only build/package integrity. This does not run or validate gameplay.
[CmdletBinding()]
param(
    [Parameter(Mandatory = $true)]
    [string]$PackagePath
)

$ErrorActionPreference = 'Stop'
Set-StrictMode -Version Latest
$sourceRoot = Split-Path -Parent $PSScriptRoot
$packageRoot = (Resolve-Path -LiteralPath $PackagePath).Path

# An exact allowlist also excludes ROMs, settings, saves, screenshots and build files.
$runtimeSources = @{
    'README.txt' = 'README.txt'
    'VERSION.txt' = 'VERSION.txt'
    'SDL-LICENSE.txt' = 'third_party/SDL-LICENSE.txt'
    'SDL_GameControllerDB-LICENSE.txt' = 'third_party/SDL_GameControllerDB-LICENSE.txt'
    'THIRD-PARTY-NOTICES.txt' = 'THIRD-PARTY-NOTICES.txt'
    'gamecontrollerdb.txt' = 'third_party/gamecontrollerdb.txt'
    'Rom/Readme.txt' = 'Rom/Readme.txt'
    'Snapshots/Readme.txt' = 'Snapshots/Readme.txt'
    'Screenshots/Readme.txt' = 'Screenshots/Readme.txt'
}
$expectedFiles = @('Launcher.exe') + @($runtimeSources.Keys)
$entries = @(Get-ChildItem -LiteralPath $packageRoot -Recurse -Force)
foreach ($entry in $entries) {
    if ($entry.Attributes -band [IO.FileAttributes]::ReparsePoint) {
        throw "Package must not contain links: $($entry.FullName)"
    }
}
$actualFiles = @($entries | Where-Object { -not $_.PSIsContainer } | ForEach-Object {
    $_.FullName.Substring($packageRoot.Length + 1).Replace('\', '/')
})
$difference = @(Compare-Object -ReferenceObject $expectedFiles -DifferenceObject $actualFiles)
if ($difference.Count) {
    throw "Package file list mismatch (<= missing, => unexpected): $($difference | Out-String)"
}
$actualDirectories = @($entries | Where-Object PSIsContainer | ForEach-Object {
    $_.FullName.Substring($packageRoot.Length + 1).Replace('\', '/')
})
if (@(Compare-Object @('Rom', 'Snapshots', 'Screenshots') $actualDirectories).Count) {
    throw 'Package directory list mismatch.'
}
foreach ($relativePath in $runtimeSources.Keys) {
    $packagedHash = (Get-FileHash -LiteralPath (Join-Path $packageRoot $relativePath) -Algorithm SHA256).Hash
    $sourceHash = (Get-FileHash -LiteralPath (Join-Path $sourceRoot $runtimeSources[$relativePath]) -Algorithm SHA256).Hash
    if ($packagedHash -ne $sourceHash) {
        throw "Runtime file differs from source: $relativePath"
    }
}

# Inspect the PE header without starting the launcher or requiring a ROM.
$executable = [IO.File]::ReadAllBytes((Join-Path $packageRoot 'Launcher.exe'))
if ($executable.Length -lt 64 -or $executable[0] -ne 0x4d -or $executable[1] -ne 0x5a) {
    throw 'Launcher.exe is not a Windows executable.'
}
$peOffset = [BitConverter]::ToInt32($executable, 0x3c)
if ($peOffset -lt 64 -or $peOffset -gt $executable.Length - 26 -or
    [BitConverter]::ToUInt32($executable, $peOffset) -ne 0x00004550 -or
    [BitConverter]::ToUInt16($executable, $peOffset + 4) -ne 0x8664 -or
    [BitConverter]::ToUInt16($executable, $peOffset + 24) -ne 0x020b) {
    throw 'Launcher.exe must be a PE32+ AMD64 executable.'
}
Write-Host "Verified Windows x64 portable package: $($expectedFiles.Count) files; runtime files match source; no ROM or user data."
