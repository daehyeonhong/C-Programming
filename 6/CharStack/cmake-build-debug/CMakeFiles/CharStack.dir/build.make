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
CMAKE_COMMAND = C:\Users\hongdae\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.5457.51\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\hongdae\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.5457.51\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\hongdae\dev\workspace\Cpp\6\CharStack

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\hongdae\dev\workspace\Cpp\6\CharStack\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\CharStack.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\CharStack.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\CharStack.dir\flags.make

CMakeFiles\CharStack.dir\CSMain.cpp.obj: CMakeFiles\CharStack.dir\flags.make
CMakeFiles\CharStack.dir\CSMain.cpp.obj: ..\CSMain.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\hongdae\dev\workspace\Cpp\6\CharStack\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CharStack.dir/CSMain.cpp.obj"
	C:\PROGRA~1\MIB055~1\2022\COMMUN~1\VC\Tools\MSVC\1430~1.307\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\CharStack.dir\CSMain.cpp.obj /FdCMakeFiles\CharStack.dir\ /FS -c C:\Users\hongdae\dev\workspace\Cpp\6\CharStack\CSMain.cpp
<<

CMakeFiles\CharStack.dir\CSMain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CharStack.dir/CSMain.cpp.i"
	C:\PROGRA~1\MIB055~1\2022\COMMUN~1\VC\Tools\MSVC\1430~1.307\bin\Hostx86\x86\cl.exe > CMakeFiles\CharStack.dir\CSMain.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\hongdae\dev\workspace\Cpp\6\CharStack\CSMain.cpp
<<

CMakeFiles\CharStack.dir\CSMain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CharStack.dir/CSMain.cpp.s"
	C:\PROGRA~1\MIB055~1\2022\COMMUN~1\VC\Tools\MSVC\1430~1.307\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\CharStack.dir\CSMain.cpp.s /c C:\Users\hongdae\dev\workspace\Cpp\6\CharStack\CSMain.cpp
<<

# Object files for target CharStack
CharStack_OBJECTS = \
"CMakeFiles\CharStack.dir\CSMain.cpp.obj"

# External object files for target CharStack
CharStack_EXTERNAL_OBJECTS =

CharStack.exe: CMakeFiles\CharStack.dir\CSMain.cpp.obj
CharStack.exe: CMakeFiles\CharStack.dir\build.make
CharStack.exe: CMakeFiles\CharStack.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\hongdae\dev\workspace\Cpp\6\CharStack\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CharStack.exe"
	C:\Users\hongdae\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.5457.51\bin\cmake\win\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\CharStack.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests -- C:\PROGRA~1\MIB055~1\2022\COMMUN~1\VC\Tools\MSVC\1430~1.307\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\CharStack.dir\objects1.rsp @<<
 /out:CharStack.exe /implib:CharStack.lib /pdb:C:\Users\hongdae\dev\workspace\Cpp\6\CharStack\cmake-build-debug\CharStack.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\CharStack.dir\build: CharStack.exe
.PHONY : CMakeFiles\CharStack.dir\build

CMakeFiles\CharStack.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CharStack.dir\cmake_clean.cmake
.PHONY : CMakeFiles\CharStack.dir\clean

CMakeFiles\CharStack.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\hongdae\dev\workspace\Cpp\6\CharStack C:\Users\hongdae\dev\workspace\Cpp\6\CharStack C:\Users\hongdae\dev\workspace\Cpp\6\CharStack\cmake-build-debug C:\Users\hongdae\dev\workspace\Cpp\6\CharStack\cmake-build-debug C:\Users\hongdae\dev\workspace\Cpp\6\CharStack\cmake-build-debug\CMakeFiles\CharStack.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\CharStack.dir\depend

