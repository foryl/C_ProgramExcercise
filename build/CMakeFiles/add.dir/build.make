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
CMAKE_SOURCE_DIR = E:/0.MyExcercise/1.CAndCPP/Tree

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:/0.MyExcercise/1.CAndCPP/Tree/build

# Include any dependencies generated for this target.
include CMakeFiles/add.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/add.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/add.dir/flags.make

CMakeFiles/add.dir/tree.c.obj: CMakeFiles/add.dir/flags.make
CMakeFiles/add.dir/tree.c.obj: ../tree.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:/0.MyExcercise/1.CAndCPP/Tree/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/add.dir/tree.c.obj"
	D:/ProgramFiles/MinGW/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/add.dir/tree.c.obj   -c E:/0.MyExcercise/1.CAndCPP/Tree/tree.c

CMakeFiles/add.dir/tree.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/add.dir/tree.c.i"
	D:/ProgramFiles/MinGW/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:/0.MyExcercise/1.CAndCPP/Tree/tree.c > CMakeFiles/add.dir/tree.c.i

CMakeFiles/add.dir/tree.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/add.dir/tree.c.s"
	D:/ProgramFiles/MinGW/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:/0.MyExcercise/1.CAndCPP/Tree/tree.c -o CMakeFiles/add.dir/tree.c.s

# Object files for target add
add_OBJECTS = \
"CMakeFiles/add.dir/tree.c.obj"

# External object files for target add
add_EXTERNAL_OBJECTS =

libadd.a: CMakeFiles/add.dir/tree.c.obj
libadd.a: CMakeFiles/add.dir/build.make
libadd.a: CMakeFiles/add.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:/0.MyExcercise/1.CAndCPP/Tree/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libadd.a"
	$(CMAKE_COMMAND) -P CMakeFiles/add.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/add.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/add.dir/build: libadd.a

.PHONY : CMakeFiles/add.dir/build

CMakeFiles/add.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/add.dir/cmake_clean.cmake
.PHONY : CMakeFiles/add.dir/clean

CMakeFiles/add.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" E:/0.MyExcercise/1.CAndCPP/Tree E:/0.MyExcercise/1.CAndCPP/Tree E:/0.MyExcercise/1.CAndCPP/Tree/build E:/0.MyExcercise/1.CAndCPP/Tree/build E:/0.MyExcercise/1.CAndCPP/Tree/build/CMakeFiles/add.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/add.dir/depend

