# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = "D:/Program Files/CMake/bin/cmake.exe"

# The command to remove a file.
RM = "D:/Program Files/CMake/bin/cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:/0.MyExcercise/3.CPPProgrammingExcercise

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:/0.MyExcercise/3.CPPProgrammingExcercise/build

# Include any dependencies generated for this target.
include library/CMakeFiles/array.dir/depend.make

# Include the progress variables for this target.
include library/CMakeFiles/array.dir/progress.make

# Include the compile flags for this target's objects.
include library/CMakeFiles/array.dir/flags.make

library/CMakeFiles/array.dir/LeetCode.cc.obj: library/CMakeFiles/array.dir/flags.make
library/CMakeFiles/array.dir/LeetCode.cc.obj: library/CMakeFiles/array.dir/includes_CXX.rsp
library/CMakeFiles/array.dir/LeetCode.cc.obj: ../library/LeetCode.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:/0.MyExcercise/3.CPPProgrammingExcercise/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object library/CMakeFiles/array.dir/LeetCode.cc.obj"
	cd E:/0.MyExcercise/3.CPPProgrammingExcercise/build/library && D:/ProgramFiles/MinGW/bin/g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/array.dir/LeetCode.cc.obj -c E:/0.MyExcercise/3.CPPProgrammingExcercise/library/LeetCode.cc

library/CMakeFiles/array.dir/LeetCode.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/array.dir/LeetCode.cc.i"
	cd E:/0.MyExcercise/3.CPPProgrammingExcercise/build/library && D:/ProgramFiles/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:/0.MyExcercise/3.CPPProgrammingExcercise/library/LeetCode.cc > CMakeFiles/array.dir/LeetCode.cc.i

library/CMakeFiles/array.dir/LeetCode.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/array.dir/LeetCode.cc.s"
	cd E:/0.MyExcercise/3.CPPProgrammingExcercise/build/library && D:/ProgramFiles/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:/0.MyExcercise/3.CPPProgrammingExcercise/library/LeetCode.cc -o CMakeFiles/array.dir/LeetCode.cc.s

# Object files for target array
array_OBJECTS = \
"CMakeFiles/array.dir/LeetCode.cc.obj"

# External object files for target array
array_EXTERNAL_OBJECTS =

library/libarray.a: library/CMakeFiles/array.dir/LeetCode.cc.obj
library/libarray.a: library/CMakeFiles/array.dir/build.make
library/libarray.a: library/CMakeFiles/array.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:/0.MyExcercise/3.CPPProgrammingExcercise/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libarray.a"
	cd E:/0.MyExcercise/3.CPPProgrammingExcercise/build/library && $(CMAKE_COMMAND) -P CMakeFiles/array.dir/cmake_clean_target.cmake
	cd E:/0.MyExcercise/3.CPPProgrammingExcercise/build/library && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/array.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
library/CMakeFiles/array.dir/build: library/libarray.a

.PHONY : library/CMakeFiles/array.dir/build

library/CMakeFiles/array.dir/clean:
	cd E:/0.MyExcercise/3.CPPProgrammingExcercise/build/library && $(CMAKE_COMMAND) -P CMakeFiles/array.dir/cmake_clean.cmake
.PHONY : library/CMakeFiles/array.dir/clean

library/CMakeFiles/array.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" E:/0.MyExcercise/3.CPPProgrammingExcercise E:/0.MyExcercise/3.CPPProgrammingExcercise/library E:/0.MyExcercise/3.CPPProgrammingExcercise/build E:/0.MyExcercise/3.CPPProgrammingExcercise/build/library E:/0.MyExcercise/3.CPPProgrammingExcercise/build/library/CMakeFiles/array.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : library/CMakeFiles/array.dir/depend

