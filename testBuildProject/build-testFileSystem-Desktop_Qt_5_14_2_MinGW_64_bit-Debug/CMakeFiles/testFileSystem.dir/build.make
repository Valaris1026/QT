# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Testspace\qt\QT\testBuildProject\testFileSystem

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Testspace\qt\QT\testBuildProject\build-testFileSystem-Desktop_Qt_5_14_2_MinGW_64_bit-Debug

# Include any dependencies generated for this target.
include CMakeFiles/testFileSystem.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/testFileSystem.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/testFileSystem.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testFileSystem.dir/flags.make

D:/Testspace/qt/QT/testBuildProject/testFileSystem/testFileSystem_zh_CN.ts: D:/Testspace/qt/QT/testBuildProject/testFileSystem
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=D:\Testspace\qt\QT\testBuildProject\build-testFileSystem-Desktop_Qt_5_14_2_MinGW_64_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating D:/Testspace/qt/QT/testBuildProject/testFileSystem/testFileSystem_zh_CN.ts"
	C:\MySoft\QtIDE\5.14.2\mingw73_64\bin\lupdate.exe @D:/Testspace/qt/QT/testBuildProject/build-testFileSystem-Desktop_Qt_5_14_2_MinGW_64_bit-Debug/CMakeFiles/testFileSystem_zh_CN.ts_lst_file -ts D:/Testspace/qt/QT/testBuildProject/testFileSystem/testFileSystem_zh_CN.ts

CMakeFiles/testFileSystem.dir/testFileSystem_autogen/mocs_compilation.cpp.obj: CMakeFiles/testFileSystem.dir/flags.make
CMakeFiles/testFileSystem.dir/testFileSystem_autogen/mocs_compilation.cpp.obj: CMakeFiles/testFileSystem.dir/includes_CXX.rsp
CMakeFiles/testFileSystem.dir/testFileSystem_autogen/mocs_compilation.cpp.obj: testFileSystem_autogen/mocs_compilation.cpp
CMakeFiles/testFileSystem.dir/testFileSystem_autogen/mocs_compilation.cpp.obj: CMakeFiles/testFileSystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Testspace\qt\QT\testBuildProject\build-testFileSystem-Desktop_Qt_5_14_2_MinGW_64_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/testFileSystem.dir/testFileSystem_autogen/mocs_compilation.cpp.obj"
	C:\MySoft\QtIDE\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/testFileSystem.dir/testFileSystem_autogen/mocs_compilation.cpp.obj -MF CMakeFiles\testFileSystem.dir\testFileSystem_autogen\mocs_compilation.cpp.obj.d -o CMakeFiles\testFileSystem.dir\testFileSystem_autogen\mocs_compilation.cpp.obj -c D:\Testspace\qt\QT\testBuildProject\build-testFileSystem-Desktop_Qt_5_14_2_MinGW_64_bit-Debug\testFileSystem_autogen\mocs_compilation.cpp

CMakeFiles/testFileSystem.dir/testFileSystem_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testFileSystem.dir/testFileSystem_autogen/mocs_compilation.cpp.i"
	C:\MySoft\QtIDE\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Testspace\qt\QT\testBuildProject\build-testFileSystem-Desktop_Qt_5_14_2_MinGW_64_bit-Debug\testFileSystem_autogen\mocs_compilation.cpp > CMakeFiles\testFileSystem.dir\testFileSystem_autogen\mocs_compilation.cpp.i

CMakeFiles/testFileSystem.dir/testFileSystem_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testFileSystem.dir/testFileSystem_autogen/mocs_compilation.cpp.s"
	C:\MySoft\QtIDE\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Testspace\qt\QT\testBuildProject\build-testFileSystem-Desktop_Qt_5_14_2_MinGW_64_bit-Debug\testFileSystem_autogen\mocs_compilation.cpp -o CMakeFiles\testFileSystem.dir\testFileSystem_autogen\mocs_compilation.cpp.s

CMakeFiles/testFileSystem.dir/main.cpp.obj: CMakeFiles/testFileSystem.dir/flags.make
CMakeFiles/testFileSystem.dir/main.cpp.obj: CMakeFiles/testFileSystem.dir/includes_CXX.rsp
CMakeFiles/testFileSystem.dir/main.cpp.obj: D:/Testspace/qt/QT/testBuildProject/testFileSystem/main.cpp
CMakeFiles/testFileSystem.dir/main.cpp.obj: CMakeFiles/testFileSystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Testspace\qt\QT\testBuildProject\build-testFileSystem-Desktop_Qt_5_14_2_MinGW_64_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/testFileSystem.dir/main.cpp.obj"
	C:\MySoft\QtIDE\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/testFileSystem.dir/main.cpp.obj -MF CMakeFiles\testFileSystem.dir\main.cpp.obj.d -o CMakeFiles\testFileSystem.dir\main.cpp.obj -c D:\Testspace\qt\QT\testBuildProject\testFileSystem\main.cpp

CMakeFiles/testFileSystem.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testFileSystem.dir/main.cpp.i"
	C:\MySoft\QtIDE\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Testspace\qt\QT\testBuildProject\testFileSystem\main.cpp > CMakeFiles\testFileSystem.dir\main.cpp.i

CMakeFiles/testFileSystem.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testFileSystem.dir/main.cpp.s"
	C:\MySoft\QtIDE\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Testspace\qt\QT\testBuildProject\testFileSystem\main.cpp -o CMakeFiles\testFileSystem.dir\main.cpp.s

CMakeFiles/testFileSystem.dir/mainwindow.cpp.obj: CMakeFiles/testFileSystem.dir/flags.make
CMakeFiles/testFileSystem.dir/mainwindow.cpp.obj: CMakeFiles/testFileSystem.dir/includes_CXX.rsp
CMakeFiles/testFileSystem.dir/mainwindow.cpp.obj: D:/Testspace/qt/QT/testBuildProject/testFileSystem/mainwindow.cpp
CMakeFiles/testFileSystem.dir/mainwindow.cpp.obj: CMakeFiles/testFileSystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Testspace\qt\QT\testBuildProject\build-testFileSystem-Desktop_Qt_5_14_2_MinGW_64_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/testFileSystem.dir/mainwindow.cpp.obj"
	C:\MySoft\QtIDE\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/testFileSystem.dir/mainwindow.cpp.obj -MF CMakeFiles\testFileSystem.dir\mainwindow.cpp.obj.d -o CMakeFiles\testFileSystem.dir\mainwindow.cpp.obj -c D:\Testspace\qt\QT\testBuildProject\testFileSystem\mainwindow.cpp

CMakeFiles/testFileSystem.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testFileSystem.dir/mainwindow.cpp.i"
	C:\MySoft\QtIDE\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Testspace\qt\QT\testBuildProject\testFileSystem\mainwindow.cpp > CMakeFiles\testFileSystem.dir\mainwindow.cpp.i

CMakeFiles/testFileSystem.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testFileSystem.dir/mainwindow.cpp.s"
	C:\MySoft\QtIDE\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Testspace\qt\QT\testBuildProject\testFileSystem\mainwindow.cpp -o CMakeFiles\testFileSystem.dir\mainwindow.cpp.s

# Object files for target testFileSystem
testFileSystem_OBJECTS = \
"CMakeFiles/testFileSystem.dir/testFileSystem_autogen/mocs_compilation.cpp.obj" \
"CMakeFiles/testFileSystem.dir/main.cpp.obj" \
"CMakeFiles/testFileSystem.dir/mainwindow.cpp.obj"

# External object files for target testFileSystem
testFileSystem_EXTERNAL_OBJECTS =

testFileSystem.exe: CMakeFiles/testFileSystem.dir/testFileSystem_autogen/mocs_compilation.cpp.obj
testFileSystem.exe: CMakeFiles/testFileSystem.dir/main.cpp.obj
testFileSystem.exe: CMakeFiles/testFileSystem.dir/mainwindow.cpp.obj
testFileSystem.exe: CMakeFiles/testFileSystem.dir/build.make
testFileSystem.exe: C:/MySoft/QtIDE/5.14.2/mingw73_64/lib/libQt5Widgets.a
testFileSystem.exe: C:/MySoft/QtIDE/5.14.2/mingw73_64/lib/libQt5Gui.a
testFileSystem.exe: C:/MySoft/QtIDE/5.14.2/mingw73_64/lib/libQt5Core.a
testFileSystem.exe: C:/MySoft/QtIDE/5.14.2/mingw73_64/lib/libqtmain.a
testFileSystem.exe: CMakeFiles/testFileSystem.dir/linkLibs.rsp
testFileSystem.exe: CMakeFiles/testFileSystem.dir/objects1.rsp
testFileSystem.exe: CMakeFiles/testFileSystem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Testspace\qt\QT\testBuildProject\build-testFileSystem-Desktop_Qt_5_14_2_MinGW_64_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable testFileSystem.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\testFileSystem.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testFileSystem.dir/build: testFileSystem.exe
.PHONY : CMakeFiles/testFileSystem.dir/build

CMakeFiles/testFileSystem.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\testFileSystem.dir\cmake_clean.cmake
.PHONY : CMakeFiles/testFileSystem.dir/clean

CMakeFiles/testFileSystem.dir/depend: D:/Testspace/qt/QT/testBuildProject/testFileSystem/testFileSystem_zh_CN.ts
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Testspace\qt\QT\testBuildProject\testFileSystem D:\Testspace\qt\QT\testBuildProject\testFileSystem D:\Testspace\qt\QT\testBuildProject\build-testFileSystem-Desktop_Qt_5_14_2_MinGW_64_bit-Debug D:\Testspace\qt\QT\testBuildProject\build-testFileSystem-Desktop_Qt_5_14_2_MinGW_64_bit-Debug D:\Testspace\qt\QT\testBuildProject\build-testFileSystem-Desktop_Qt_5_14_2_MinGW_64_bit-Debug\CMakeFiles\testFileSystem.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/testFileSystem.dir/depend

