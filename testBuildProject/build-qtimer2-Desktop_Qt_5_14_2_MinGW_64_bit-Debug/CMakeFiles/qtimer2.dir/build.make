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
CMAKE_SOURCE_DIR = D:\Testspace\qt\testBuildProject\qtimer2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Testspace\qt\testBuildProject\build-qtimer2-Desktop_Qt_5_14_2_MinGW_64_bit-Debug

# Include any dependencies generated for this target.
include CMakeFiles/qtimer2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/qtimer2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/qtimer2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/qtimer2.dir/flags.make

D:/Testspace/qt/testBuildProject/qtimer2/qtimer2_zh_CN.ts: D:/Testspace/qt/testBuildProject/qtimer2
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=D:\Testspace\qt\testBuildProject\build-qtimer2-Desktop_Qt_5_14_2_MinGW_64_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating D:/Testspace/qt/testBuildProject/qtimer2/qtimer2_zh_CN.ts"
	C:\MySoft\QtIDE\5.14.2\mingw73_64\bin\lupdate.exe @D:/Testspace/qt/testBuildProject/build-qtimer2-Desktop_Qt_5_14_2_MinGW_64_bit-Debug/CMakeFiles/qtimer2_zh_CN.ts_lst_file -ts D:/Testspace/qt/testBuildProject/qtimer2/qtimer2_zh_CN.ts

CMakeFiles/qtimer2.dir/qtimer2_autogen/mocs_compilation.cpp.obj: CMakeFiles/qtimer2.dir/flags.make
CMakeFiles/qtimer2.dir/qtimer2_autogen/mocs_compilation.cpp.obj: CMakeFiles/qtimer2.dir/includes_CXX.rsp
CMakeFiles/qtimer2.dir/qtimer2_autogen/mocs_compilation.cpp.obj: qtimer2_autogen/mocs_compilation.cpp
CMakeFiles/qtimer2.dir/qtimer2_autogen/mocs_compilation.cpp.obj: CMakeFiles/qtimer2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Testspace\qt\testBuildProject\build-qtimer2-Desktop_Qt_5_14_2_MinGW_64_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/qtimer2.dir/qtimer2_autogen/mocs_compilation.cpp.obj"
	C:\MySoft\QtIDE\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/qtimer2.dir/qtimer2_autogen/mocs_compilation.cpp.obj -MF CMakeFiles\qtimer2.dir\qtimer2_autogen\mocs_compilation.cpp.obj.d -o CMakeFiles\qtimer2.dir\qtimer2_autogen\mocs_compilation.cpp.obj -c D:\Testspace\qt\testBuildProject\build-qtimer2-Desktop_Qt_5_14_2_MinGW_64_bit-Debug\qtimer2_autogen\mocs_compilation.cpp

CMakeFiles/qtimer2.dir/qtimer2_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qtimer2.dir/qtimer2_autogen/mocs_compilation.cpp.i"
	C:\MySoft\QtIDE\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Testspace\qt\testBuildProject\build-qtimer2-Desktop_Qt_5_14_2_MinGW_64_bit-Debug\qtimer2_autogen\mocs_compilation.cpp > CMakeFiles\qtimer2.dir\qtimer2_autogen\mocs_compilation.cpp.i

CMakeFiles/qtimer2.dir/qtimer2_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qtimer2.dir/qtimer2_autogen/mocs_compilation.cpp.s"
	C:\MySoft\QtIDE\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Testspace\qt\testBuildProject\build-qtimer2-Desktop_Qt_5_14_2_MinGW_64_bit-Debug\qtimer2_autogen\mocs_compilation.cpp -o CMakeFiles\qtimer2.dir\qtimer2_autogen\mocs_compilation.cpp.s

CMakeFiles/qtimer2.dir/main.cpp.obj: CMakeFiles/qtimer2.dir/flags.make
CMakeFiles/qtimer2.dir/main.cpp.obj: CMakeFiles/qtimer2.dir/includes_CXX.rsp
CMakeFiles/qtimer2.dir/main.cpp.obj: D:/Testspace/qt/testBuildProject/qtimer2/main.cpp
CMakeFiles/qtimer2.dir/main.cpp.obj: CMakeFiles/qtimer2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Testspace\qt\testBuildProject\build-qtimer2-Desktop_Qt_5_14_2_MinGW_64_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/qtimer2.dir/main.cpp.obj"
	C:\MySoft\QtIDE\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/qtimer2.dir/main.cpp.obj -MF CMakeFiles\qtimer2.dir\main.cpp.obj.d -o CMakeFiles\qtimer2.dir\main.cpp.obj -c D:\Testspace\qt\testBuildProject\qtimer2\main.cpp

CMakeFiles/qtimer2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qtimer2.dir/main.cpp.i"
	C:\MySoft\QtIDE\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Testspace\qt\testBuildProject\qtimer2\main.cpp > CMakeFiles\qtimer2.dir\main.cpp.i

CMakeFiles/qtimer2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qtimer2.dir/main.cpp.s"
	C:\MySoft\QtIDE\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Testspace\qt\testBuildProject\qtimer2\main.cpp -o CMakeFiles\qtimer2.dir\main.cpp.s

CMakeFiles/qtimer2.dir/widget.cpp.obj: CMakeFiles/qtimer2.dir/flags.make
CMakeFiles/qtimer2.dir/widget.cpp.obj: CMakeFiles/qtimer2.dir/includes_CXX.rsp
CMakeFiles/qtimer2.dir/widget.cpp.obj: D:/Testspace/qt/testBuildProject/qtimer2/widget.cpp
CMakeFiles/qtimer2.dir/widget.cpp.obj: CMakeFiles/qtimer2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Testspace\qt\testBuildProject\build-qtimer2-Desktop_Qt_5_14_2_MinGW_64_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/qtimer2.dir/widget.cpp.obj"
	C:\MySoft\QtIDE\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/qtimer2.dir/widget.cpp.obj -MF CMakeFiles\qtimer2.dir\widget.cpp.obj.d -o CMakeFiles\qtimer2.dir\widget.cpp.obj -c D:\Testspace\qt\testBuildProject\qtimer2\widget.cpp

CMakeFiles/qtimer2.dir/widget.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qtimer2.dir/widget.cpp.i"
	C:\MySoft\QtIDE\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Testspace\qt\testBuildProject\qtimer2\widget.cpp > CMakeFiles\qtimer2.dir\widget.cpp.i

CMakeFiles/qtimer2.dir/widget.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qtimer2.dir/widget.cpp.s"
	C:\MySoft\QtIDE\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Testspace\qt\testBuildProject\qtimer2\widget.cpp -o CMakeFiles\qtimer2.dir\widget.cpp.s

# Object files for target qtimer2
qtimer2_OBJECTS = \
"CMakeFiles/qtimer2.dir/qtimer2_autogen/mocs_compilation.cpp.obj" \
"CMakeFiles/qtimer2.dir/main.cpp.obj" \
"CMakeFiles/qtimer2.dir/widget.cpp.obj"

# External object files for target qtimer2
qtimer2_EXTERNAL_OBJECTS =

qtimer2.exe: CMakeFiles/qtimer2.dir/qtimer2_autogen/mocs_compilation.cpp.obj
qtimer2.exe: CMakeFiles/qtimer2.dir/main.cpp.obj
qtimer2.exe: CMakeFiles/qtimer2.dir/widget.cpp.obj
qtimer2.exe: CMakeFiles/qtimer2.dir/build.make
qtimer2.exe: C:/MySoft/QtIDE/5.14.2/mingw73_64/lib/libQt5Widgets.a
qtimer2.exe: C:/MySoft/QtIDE/5.14.2/mingw73_64/lib/libQt5Gui.a
qtimer2.exe: C:/MySoft/QtIDE/5.14.2/mingw73_64/lib/libQt5Core.a
qtimer2.exe: CMakeFiles/qtimer2.dir/linkLibs.rsp
qtimer2.exe: CMakeFiles/qtimer2.dir/objects1.rsp
qtimer2.exe: CMakeFiles/qtimer2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Testspace\qt\testBuildProject\build-qtimer2-Desktop_Qt_5_14_2_MinGW_64_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable qtimer2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\qtimer2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/qtimer2.dir/build: qtimer2.exe
.PHONY : CMakeFiles/qtimer2.dir/build

CMakeFiles/qtimer2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\qtimer2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/qtimer2.dir/clean

CMakeFiles/qtimer2.dir/depend: D:/Testspace/qt/testBuildProject/qtimer2/qtimer2_zh_CN.ts
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Testspace\qt\testBuildProject\qtimer2 D:\Testspace\qt\testBuildProject\qtimer2 D:\Testspace\qt\testBuildProject\build-qtimer2-Desktop_Qt_5_14_2_MinGW_64_bit-Debug D:\Testspace\qt\testBuildProject\build-qtimer2-Desktop_Qt_5_14_2_MinGW_64_bit-Debug D:\Testspace\qt\testBuildProject\build-qtimer2-Desktop_Qt_5_14_2_MinGW_64_bit-Debug\CMakeFiles\qtimer2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/qtimer2.dir/depend

