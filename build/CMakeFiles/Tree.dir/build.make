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
include CMakeFiles/Tree.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Tree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Tree.dir/flags.make

CMakeFiles/Tree.dir/main.c.obj: CMakeFiles/Tree.dir/flags.make
CMakeFiles/Tree.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:/0.MyExcercise/1.CAndCPP/Tree/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Tree.dir/main.c.obj"
	D:/ProgramFiles/MinGW/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Tree.dir/main.c.obj   -c E:/0.MyExcercise/1.CAndCPP/Tree/main.c

CMakeFiles/Tree.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Tree.dir/main.c.i"
	D:/ProgramFiles/MinGW/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:/0.MyExcercise/1.CAndCPP/Tree/main.c > CMakeFiles/Tree.dir/main.c.i

CMakeFiles/Tree.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Tree.dir/main.c.s"
	D:/ProgramFiles/MinGW/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:/0.MyExcercise/1.CAndCPP/Tree/main.c -o CMakeFiles/Tree.dir/main.c.s

CMakeFiles/Tree.dir/queue.c.obj: CMakeFiles/Tree.dir/flags.make
CMakeFiles/Tree.dir/queue.c.obj: ../queue.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:/0.MyExcercise/1.CAndCPP/Tree/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Tree.dir/queue.c.obj"
	D:/ProgramFiles/MinGW/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Tree.dir/queue.c.obj   -c E:/0.MyExcercise/1.CAndCPP/Tree/queue.c

CMakeFiles/Tree.dir/queue.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Tree.dir/queue.c.i"
	D:/ProgramFiles/MinGW/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:/0.MyExcercise/1.CAndCPP/Tree/queue.c > CMakeFiles/Tree.dir/queue.c.i

CMakeFiles/Tree.dir/queue.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Tree.dir/queue.c.s"
	D:/ProgramFiles/MinGW/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:/0.MyExcercise/1.CAndCPP/Tree/queue.c -o CMakeFiles/Tree.dir/queue.c.s

CMakeFiles/Tree.dir/tree.c.obj: CMakeFiles/Tree.dir/flags.make
CMakeFiles/Tree.dir/tree.c.obj: ../tree.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:/0.MyExcercise/1.CAndCPP/Tree/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Tree.dir/tree.c.obj"
	D:/ProgramFiles/MinGW/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Tree.dir/tree.c.obj   -c E:/0.MyExcercise/1.CAndCPP/Tree/tree.c

CMakeFiles/Tree.dir/tree.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Tree.dir/tree.c.i"
	D:/ProgramFiles/MinGW/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:/0.MyExcercise/1.CAndCPP/Tree/tree.c > CMakeFiles/Tree.dir/tree.c.i

CMakeFiles/Tree.dir/tree.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Tree.dir/tree.c.s"
	D:/ProgramFiles/MinGW/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:/0.MyExcercise/1.CAndCPP/Tree/tree.c -o CMakeFiles/Tree.dir/tree.c.s

# Object files for target Tree
Tree_OBJECTS = \
"CMakeFiles/Tree.dir/main.c.obj" \
"CMakeFiles/Tree.dir/queue.c.obj" \
"CMakeFiles/Tree.dir/tree.c.obj"

# External object files for target Tree
Tree_EXTERNAL_OBJECTS =

../bin/Tree.exe: CMakeFiles/Tree.dir/main.c.obj
../bin/Tree.exe: CMakeFiles/Tree.dir/queue.c.obj
../bin/Tree.exe: CMakeFiles/Tree.dir/tree.c.obj
../bin/Tree.exe: CMakeFiles/Tree.dir/build.make
../bin/Tree.exe: CMakeFiles/Tree.dir/linklibs.rsp
../bin/Tree.exe: CMakeFiles/Tree.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:/0.MyExcercise/1.CAndCPP/Tree/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable ../bin/Tree.exe"
	"D:/Program Files/CMake/bin/cmake.exe" -E remove -f CMakeFiles/Tree.dir/objects.a
	D:/ProgramFiles/MinGW/mingw32/bin/ar.exe cr CMakeFiles/Tree.dir/objects.a @CMakeFiles/Tree.dir/objects1.rsp
	D:/ProgramFiles/MinGW/bin/gcc.exe -g   -Wl,--whole-archive CMakeFiles/Tree.dir/objects.a -Wl,--no-whole-archive  -o ../bin/Tree.exe -Wl,--out-implib,../bin/libTree.dll.a -Wl,--major-image-version,0,--minor-image-version,0 @CMakeFiles/Tree.dir/linklibs.rsp

# Rule to build all files generated by this target.
CMakeFiles/Tree.dir/build: ../bin/Tree.exe

.PHONY : CMakeFiles/Tree.dir/build

CMakeFiles/Tree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Tree.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Tree.dir/clean

CMakeFiles/Tree.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" E:/0.MyExcercise/1.CAndCPP/Tree E:/0.MyExcercise/1.CAndCPP/Tree E:/0.MyExcercise/1.CAndCPP/Tree/build E:/0.MyExcercise/1.CAndCPP/Tree/build E:/0.MyExcercise/1.CAndCPP/Tree/build/CMakeFiles/Tree.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Tree.dir/depend
