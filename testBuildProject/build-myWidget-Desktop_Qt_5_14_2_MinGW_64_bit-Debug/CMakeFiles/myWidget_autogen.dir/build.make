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
CMAKE_SOURCE_DIR = D:\Testspace\qt\testBuildProject\myWidget

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Testspace\qt\testBuildProject\build-myWidget-Desktop_Qt_5_14_2_MinGW_64_bit-Debug

# Utility rule file for myWidget_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/myWidget_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/myWidget_autogen.dir/progress.make

CMakeFiles/myWidget_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=D:\Testspace\qt\testBuildProject\build-myWidget-Desktop_Qt_5_14_2_MinGW_64_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target myWidget"
	"C:\Program Files\CMake\bin\cmake.exe" -E cmake_autogen D:/Testspace/qt/testBuildProject/build-myWidget-Desktop_Qt_5_14_2_MinGW_64_bit-Debug/CMakeFiles/myWidget_autogen.dir/AutogenInfo.json Debug

myWidget_autogen: CMakeFiles/myWidget_autogen
myWidget_autogen: CMakeFiles/myWidget_autogen.dir/build.make
.PHONY : myWidget_autogen

# Rule to build all files generated by this target.
CMakeFiles/myWidget_autogen.dir/build: myWidget_autogen
.PHONY : CMakeFiles/myWidget_autogen.dir/build

CMakeFiles/myWidget_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\myWidget_autogen.dir\cmake_clean.cmake
.PHONY : CMakeFiles/myWidget_autogen.dir/clean

CMakeFiles/myWidget_autogen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Testspace\qt\testBuildProject\myWidget D:\Testspace\qt\testBuildProject\myWidget D:\Testspace\qt\testBuildProject\build-myWidget-Desktop_Qt_5_14_2_MinGW_64_bit-Debug D:\Testspace\qt\testBuildProject\build-myWidget-Desktop_Qt_5_14_2_MinGW_64_bit-Debug D:\Testspace\qt\testBuildProject\build-myWidget-Desktop_Qt_5_14_2_MinGW_64_bit-Debug\CMakeFiles\myWidget_autogen.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/myWidget_autogen.dir/depend

