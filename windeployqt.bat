
@echo off

set vSelfPath=%~dp0
chdir %vSelfPath%




mkdir CX_Tool


copy .\release\CX3000_Debug_Tool.exe  .\CX_Tool\CX3000_Debug_Tool.exe
copy .\release\config.ini  .\CX_Tool\config.ini
goto DeployStart

:DeployStart
windeployqt .\CX_Tool\CX3000_Debug_Tool.exe
goto EOF


:EOF