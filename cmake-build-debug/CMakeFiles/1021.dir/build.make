# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/hotown/Workspace/algorithm_and_data_structure

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/hotown/Workspace/algorithm_and_data_structure/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/1021.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1021.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1021.dir/flags.make

CMakeFiles/1021.dir/pat_code/basic_level/1021.cpp.o: CMakeFiles/1021.dir/flags.make
CMakeFiles/1021.dir/pat_code/basic_level/1021.cpp.o: ../pat_code/basic_level/1021.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hotown/Workspace/algorithm_and_data_structure/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1021.dir/pat_code/basic_level/1021.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/1021.dir/pat_code/basic_level/1021.cpp.o -c /Users/hotown/Workspace/algorithm_and_data_structure/pat_code/basic_level/1021.cpp

CMakeFiles/1021.dir/pat_code/basic_level/1021.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1021.dir/pat_code/basic_level/1021.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hotown/Workspace/algorithm_and_data_structure/pat_code/basic_level/1021.cpp > CMakeFiles/1021.dir/pat_code/basic_level/1021.cpp.i

CMakeFiles/1021.dir/pat_code/basic_level/1021.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1021.dir/pat_code/basic_level/1021.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hotown/Workspace/algorithm_and_data_structure/pat_code/basic_level/1021.cpp -o CMakeFiles/1021.dir/pat_code/basic_level/1021.cpp.s

CMakeFiles/1021.dir/pat_code/basic_level/1021.cpp.o.requires:

.PHONY : CMakeFiles/1021.dir/pat_code/basic_level/1021.cpp.o.requires

CMakeFiles/1021.dir/pat_code/basic_level/1021.cpp.o.provides: CMakeFiles/1021.dir/pat_code/basic_level/1021.cpp.o.requires
	$(MAKE) -f CMakeFiles/1021.dir/build.make CMakeFiles/1021.dir/pat_code/basic_level/1021.cpp.o.provides.build
.PHONY : CMakeFiles/1021.dir/pat_code/basic_level/1021.cpp.o.provides

CMakeFiles/1021.dir/pat_code/basic_level/1021.cpp.o.provides.build: CMakeFiles/1021.dir/pat_code/basic_level/1021.cpp.o


# Object files for target 1021
1021_OBJECTS = \
"CMakeFiles/1021.dir/pat_code/basic_level/1021.cpp.o"

# External object files for target 1021
1021_EXTERNAL_OBJECTS =

1021: CMakeFiles/1021.dir/pat_code/basic_level/1021.cpp.o
1021: CMakeFiles/1021.dir/build.make
1021: CMakeFiles/1021.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/hotown/Workspace/algorithm_and_data_structure/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1021"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/1021.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1021.dir/build: 1021

.PHONY : CMakeFiles/1021.dir/build

CMakeFiles/1021.dir/requires: CMakeFiles/1021.dir/pat_code/basic_level/1021.cpp.o.requires

.PHONY : CMakeFiles/1021.dir/requires

CMakeFiles/1021.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/1021.dir/cmake_clean.cmake
.PHONY : CMakeFiles/1021.dir/clean

CMakeFiles/1021.dir/depend:
	cd /Users/hotown/Workspace/algorithm_and_data_structure/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/hotown/Workspace/algorithm_and_data_structure /Users/hotown/Workspace/algorithm_and_data_structure /Users/hotown/Workspace/algorithm_and_data_structure/cmake-build-debug /Users/hotown/Workspace/algorithm_and_data_structure/cmake-build-debug /Users/hotown/Workspace/algorithm_and_data_structure/cmake-build-debug/CMakeFiles/1021.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/1021.dir/depend

