# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\plami\CLionProjects\simple-chess

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\plami\CLionProjects\simple-chess\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\simple_chess.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\simple_chess.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\simple_chess.dir\flags.make

CMakeFiles\simple_chess.dir\main.cpp.obj: CMakeFiles\simple_chess.dir\flags.make
CMakeFiles\simple_chess.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\plami\CLionProjects\simple-chess\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/simple_chess.dir/main.cpp.obj"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\simple_chess.dir\main.cpp.obj /FdCMakeFiles\simple_chess.dir\ /FS -c C:\Users\plami\CLionProjects\simple-chess\main.cpp
<<

CMakeFiles\simple_chess.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simple_chess.dir/main.cpp.i"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\simple_chess.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\plami\CLionProjects\simple-chess\main.cpp
<<

CMakeFiles\simple_chess.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simple_chess.dir/main.cpp.s"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\simple_chess.dir\main.cpp.s /c C:\Users\plami\CLionProjects\simple-chess\main.cpp
<<

CMakeFiles\simple_chess.dir\mainMenu.cpp.obj: CMakeFiles\simple_chess.dir\flags.make
CMakeFiles\simple_chess.dir\mainMenu.cpp.obj: ..\mainMenu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\plami\CLionProjects\simple-chess\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/simple_chess.dir/mainMenu.cpp.obj"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\simple_chess.dir\mainMenu.cpp.obj /FdCMakeFiles\simple_chess.dir\ /FS -c C:\Users\plami\CLionProjects\simple-chess\mainMenu.cpp
<<

CMakeFiles\simple_chess.dir\mainMenu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simple_chess.dir/mainMenu.cpp.i"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\simple_chess.dir\mainMenu.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\plami\CLionProjects\simple-chess\mainMenu.cpp
<<

CMakeFiles\simple_chess.dir\mainMenu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simple_chess.dir/mainMenu.cpp.s"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\simple_chess.dir\mainMenu.cpp.s /c C:\Users\plami\CLionProjects\simple-chess\mainMenu.cpp
<<

CMakeFiles\simple_chess.dir\defineBoardSize.cpp.obj: CMakeFiles\simple_chess.dir\flags.make
CMakeFiles\simple_chess.dir\defineBoardSize.cpp.obj: ..\defineBoardSize.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\plami\CLionProjects\simple-chess\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/simple_chess.dir/defineBoardSize.cpp.obj"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\simple_chess.dir\defineBoardSize.cpp.obj /FdCMakeFiles\simple_chess.dir\ /FS -c C:\Users\plami\CLionProjects\simple-chess\defineBoardSize.cpp
<<

CMakeFiles\simple_chess.dir\defineBoardSize.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simple_chess.dir/defineBoardSize.cpp.i"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\simple_chess.dir\defineBoardSize.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\plami\CLionProjects\simple-chess\defineBoardSize.cpp
<<

CMakeFiles\simple_chess.dir\defineBoardSize.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simple_chess.dir/defineBoardSize.cpp.s"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\simple_chess.dir\defineBoardSize.cpp.s /c C:\Users\plami\CLionProjects\simple-chess\defineBoardSize.cpp
<<

CMakeFiles\simple_chess.dir\play.cpp.obj: CMakeFiles\simple_chess.dir\flags.make
CMakeFiles\simple_chess.dir\play.cpp.obj: ..\play.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\plami\CLionProjects\simple-chess\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/simple_chess.dir/play.cpp.obj"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\simple_chess.dir\play.cpp.obj /FdCMakeFiles\simple_chess.dir\ /FS -c C:\Users\plami\CLionProjects\simple-chess\play.cpp
<<

CMakeFiles\simple_chess.dir\play.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simple_chess.dir/play.cpp.i"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\simple_chess.dir\play.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\plami\CLionProjects\simple-chess\play.cpp
<<

CMakeFiles\simple_chess.dir\play.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simple_chess.dir/play.cpp.s"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\simple_chess.dir\play.cpp.s /c C:\Users\plami\CLionProjects\simple-chess\play.cpp
<<

CMakeFiles\simple_chess.dir\generateBoard.cpp.obj: CMakeFiles\simple_chess.dir\flags.make
CMakeFiles\simple_chess.dir\generateBoard.cpp.obj: ..\generateBoard.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\plami\CLionProjects\simple-chess\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/simple_chess.dir/generateBoard.cpp.obj"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\simple_chess.dir\generateBoard.cpp.obj /FdCMakeFiles\simple_chess.dir\ /FS -c C:\Users\plami\CLionProjects\simple-chess\generateBoard.cpp
<<

CMakeFiles\simple_chess.dir\generateBoard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simple_chess.dir/generateBoard.cpp.i"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\simple_chess.dir\generateBoard.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\plami\CLionProjects\simple-chess\generateBoard.cpp
<<

CMakeFiles\simple_chess.dir\generateBoard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simple_chess.dir/generateBoard.cpp.s"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\simple_chess.dir\generateBoard.cpp.s /c C:\Users\plami\CLionProjects\simple-chess\generateBoard.cpp
<<

CMakeFiles\simple_chess.dir\printBoard.cpp.obj: CMakeFiles\simple_chess.dir\flags.make
CMakeFiles\simple_chess.dir\printBoard.cpp.obj: ..\printBoard.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\plami\CLionProjects\simple-chess\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/simple_chess.dir/printBoard.cpp.obj"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\simple_chess.dir\printBoard.cpp.obj /FdCMakeFiles\simple_chess.dir\ /FS -c C:\Users\plami\CLionProjects\simple-chess\printBoard.cpp
<<

CMakeFiles\simple_chess.dir\printBoard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simple_chess.dir/printBoard.cpp.i"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\simple_chess.dir\printBoard.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\plami\CLionProjects\simple-chess\printBoard.cpp
<<

CMakeFiles\simple_chess.dir\printBoard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simple_chess.dir/printBoard.cpp.s"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\simple_chess.dir\printBoard.cpp.s /c C:\Users\plami\CLionProjects\simple-chess\printBoard.cpp
<<

CMakeFiles\simple_chess.dir\findCoordinates.cpp.obj: CMakeFiles\simple_chess.dir\flags.make
CMakeFiles\simple_chess.dir\findCoordinates.cpp.obj: ..\findCoordinates.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\plami\CLionProjects\simple-chess\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/simple_chess.dir/findCoordinates.cpp.obj"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\simple_chess.dir\findCoordinates.cpp.obj /FdCMakeFiles\simple_chess.dir\ /FS -c C:\Users\plami\CLionProjects\simple-chess\findCoordinates.cpp
<<

CMakeFiles\simple_chess.dir\findCoordinates.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simple_chess.dir/findCoordinates.cpp.i"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\simple_chess.dir\findCoordinates.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\plami\CLionProjects\simple-chess\findCoordinates.cpp
<<

CMakeFiles\simple_chess.dir\findCoordinates.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simple_chess.dir/findCoordinates.cpp.s"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\simple_chess.dir\findCoordinates.cpp.s /c C:\Users\plami\CLionProjects\simple-chess\findCoordinates.cpp
<<

CMakeFiles\simple_chess.dir\isCheckmate.cpp.obj: CMakeFiles\simple_chess.dir\flags.make
CMakeFiles\simple_chess.dir\isCheckmate.cpp.obj: ..\isCheckmate.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\plami\CLionProjects\simple-chess\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/simple_chess.dir/isCheckmate.cpp.obj"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\simple_chess.dir\isCheckmate.cpp.obj /FdCMakeFiles\simple_chess.dir\ /FS -c C:\Users\plami\CLionProjects\simple-chess\isCheckmate.cpp
<<

CMakeFiles\simple_chess.dir\isCheckmate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simple_chess.dir/isCheckmate.cpp.i"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\simple_chess.dir\isCheckmate.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\plami\CLionProjects\simple-chess\isCheckmate.cpp
<<

CMakeFiles\simple_chess.dir\isCheckmate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simple_chess.dir/isCheckmate.cpp.s"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\simple_chess.dir\isCheckmate.cpp.s /c C:\Users\plami\CLionProjects\simple-chess\isCheckmate.cpp
<<

CMakeFiles\simple_chess.dir\botMove.cpp.obj: CMakeFiles\simple_chess.dir\flags.make
CMakeFiles\simple_chess.dir\botMove.cpp.obj: ..\botMove.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\plami\CLionProjects\simple-chess\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/simple_chess.dir/botMove.cpp.obj"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\simple_chess.dir\botMove.cpp.obj /FdCMakeFiles\simple_chess.dir\ /FS -c C:\Users\plami\CLionProjects\simple-chess\botMove.cpp
<<

CMakeFiles\simple_chess.dir\botMove.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simple_chess.dir/botMove.cpp.i"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\simple_chess.dir\botMove.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\plami\CLionProjects\simple-chess\botMove.cpp
<<

CMakeFiles\simple_chess.dir\botMove.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simple_chess.dir/botMove.cpp.s"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\simple_chess.dir\botMove.cpp.s /c C:\Users\plami\CLionProjects\simple-chess\botMove.cpp
<<

CMakeFiles\simple_chess.dir\containsObstacles.cpp.obj: CMakeFiles\simple_chess.dir\flags.make
CMakeFiles\simple_chess.dir\containsObstacles.cpp.obj: ..\containsObstacles.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\plami\CLionProjects\simple-chess\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/simple_chess.dir/containsObstacles.cpp.obj"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\simple_chess.dir\containsObstacles.cpp.obj /FdCMakeFiles\simple_chess.dir\ /FS -c C:\Users\plami\CLionProjects\simple-chess\containsObstacles.cpp
<<

CMakeFiles\simple_chess.dir\containsObstacles.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simple_chess.dir/containsObstacles.cpp.i"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\simple_chess.dir\containsObstacles.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\plami\CLionProjects\simple-chess\containsObstacles.cpp
<<

CMakeFiles\simple_chess.dir\containsObstacles.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simple_chess.dir/containsObstacles.cpp.s"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\simple_chess.dir\containsObstacles.cpp.s /c C:\Users\plami\CLionProjects\simple-chess\containsObstacles.cpp
<<

# Object files for target simple_chess
simple_chess_OBJECTS = \
"CMakeFiles\simple_chess.dir\main.cpp.obj" \
"CMakeFiles\simple_chess.dir\mainMenu.cpp.obj" \
"CMakeFiles\simple_chess.dir\defineBoardSize.cpp.obj" \
"CMakeFiles\simple_chess.dir\play.cpp.obj" \
"CMakeFiles\simple_chess.dir\generateBoard.cpp.obj" \
"CMakeFiles\simple_chess.dir\printBoard.cpp.obj" \
"CMakeFiles\simple_chess.dir\findCoordinates.cpp.obj" \
"CMakeFiles\simple_chess.dir\isCheckmate.cpp.obj" \
"CMakeFiles\simple_chess.dir\botMove.cpp.obj" \
"CMakeFiles\simple_chess.dir\containsObstacles.cpp.obj"

# External object files for target simple_chess
simple_chess_EXTERNAL_OBJECTS =

simple_chess.exe: CMakeFiles\simple_chess.dir\main.cpp.obj
simple_chess.exe: CMakeFiles\simple_chess.dir\mainMenu.cpp.obj
simple_chess.exe: CMakeFiles\simple_chess.dir\defineBoardSize.cpp.obj
simple_chess.exe: CMakeFiles\simple_chess.dir\play.cpp.obj
simple_chess.exe: CMakeFiles\simple_chess.dir\generateBoard.cpp.obj
simple_chess.exe: CMakeFiles\simple_chess.dir\printBoard.cpp.obj
simple_chess.exe: CMakeFiles\simple_chess.dir\findCoordinates.cpp.obj
simple_chess.exe: CMakeFiles\simple_chess.dir\isCheckmate.cpp.obj
simple_chess.exe: CMakeFiles\simple_chess.dir\botMove.cpp.obj
simple_chess.exe: CMakeFiles\simple_chess.dir\containsObstacles.cpp.obj
simple_chess.exe: CMakeFiles\simple_chess.dir\build.make
simple_chess.exe: CMakeFiles\simple_chess.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\plami\CLionProjects\simple-chess\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable simple_chess.exe"
	"C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\simple_chess.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100177~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100177~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\simple_chess.dir\objects1.rsp @<<
 /out:simple_chess.exe /implib:simple_chess.lib /pdb:C:\Users\plami\CLionProjects\simple-chess\cmake-build-debug\simple_chess.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\simple_chess.dir\build: simple_chess.exe
.PHONY : CMakeFiles\simple_chess.dir\build

CMakeFiles\simple_chess.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\simple_chess.dir\cmake_clean.cmake
.PHONY : CMakeFiles\simple_chess.dir\clean

CMakeFiles\simple_chess.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\plami\CLionProjects\simple-chess C:\Users\plami\CLionProjects\simple-chess C:\Users\plami\CLionProjects\simple-chess\cmake-build-debug C:\Users\plami\CLionProjects\simple-chess\cmake-build-debug C:\Users\plami\CLionProjects\simple-chess\cmake-build-debug\CMakeFiles\simple_chess.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\simple_chess.dir\depend

