# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\cmake-3.17.2-win64-x64\bin\cmake.exe

# The command to remove a file.
RM = C:\cmake-3.17.2-win64-x64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Kevin\Desktop\BRL-test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Kevin\Desktop\BRL-test

# Include any dependencies generated for this target.
include CMakeFiles/rocket.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/rocket.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rocket.dir/flags.make

CMakeFiles/rocket.dir/main.obj: CMakeFiles/rocket.dir/flags.make
CMakeFiles/rocket.dir/main.obj: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Kevin\Desktop\BRL-test\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/rocket.dir/main.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\rocket.dir\main.obj -c C:\Users\Kevin\Desktop\BRL-test\main.cpp

CMakeFiles/rocket.dir/main.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rocket.dir/main.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Kevin\Desktop\BRL-test\main.cpp > CMakeFiles\rocket.dir\main.i

CMakeFiles/rocket.dir/main.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rocket.dir/main.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Kevin\Desktop\BRL-test\main.cpp -o CMakeFiles\rocket.dir\main.s

# Object files for target rocket
rocket_OBJECTS = \
"CMakeFiles/rocket.dir/main.obj"

# External object files for target rocket
rocket_EXTERNAL_OBJECTS =

rocket.exe: CMakeFiles/rocket.dir/main.obj
rocket.exe: CMakeFiles/rocket.dir/build.make
rocket.exe: CMakeFiles/rocket.dir/linklibs.rsp
rocket.exe: CMakeFiles/rocket.dir/objects1.rsp
rocket.exe: CMakeFiles/rocket.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Kevin\Desktop\BRL-test\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable rocket.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\rocket.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rocket.dir/build: rocket.exe

.PHONY : CMakeFiles/rocket.dir/build

CMakeFiles/rocket.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\rocket.dir\cmake_clean.cmake
.PHONY : CMakeFiles/rocket.dir/clean

CMakeFiles/rocket.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Kevin\Desktop\BRL-test C:\Users\Kevin\Desktop\BRL-test C:\Users\Kevin\Desktop\BRL-test C:\Users\Kevin\Desktop\BRL-test C:\Users\Kevin\Desktop\BRL-test\CMakeFiles\rocket.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rocket.dir/depend
