@echo off
::cd "C:\Program Files (x86)\CMG\IMEX\2017.10\Win_x64\EXE"
::start mx201710.exe
::start C:\"Program Files (x86)"\CMG\IMEX\2017.10\Win_x64\EXE\mx201710.exe
set PROGRAM=C:\"Program Files (x86)"\CMG\IMEX\2017.10\Win_x64\EXE\mx201710.exe
set PATH=U:.\
set FILE=main.dat
start /b "" %PROGRAM% -f %PATH%\%FILE%^
                   -wd %PATH%\output^
                   -parasol 12^
                   -jacpar^
                   -wait
pause

