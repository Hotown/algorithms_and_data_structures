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
include CMakeFiles/a1011.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/a1011.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/a1011.dir/flags.make

CMakeFiles/a1011.dir/pat_code/advanced_level/a1011.cpp.o: CMakeFiles/a1011.dir/flags.make
CMakeFiles/a1011.dir/pat_code/advanced_level/a1011.cpp.o: ../pat_code/advanced_level/a1011.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hotown/Workspace/algorithm_and_data_structure/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/a1011.dir/pat_code/advanced_level/a1011.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a1011.dir/pat_code/advanced_level/a1011.cpp.o -c /Users/hotown/Workspace/algorithm_and_data_structure/pat_code/advanced_level/a1011.cpp

CMakeFiles/a1011.dir/pat_code/advanced_level/a1011.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a1011.dir/pat_code/advanced_level/a1011.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hotown/Workspace/algorithm_and_data_structure/pat_code/advanced_level/a1011.cpp > CMakeFiles/a1011.dir/pat_code/advanced_level/a1011.cpp.i

CMakeFiles/a1011.dir/pat_code/advanced_level/a1011.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a1011.dir/pat_code/advanced_level/a1011.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hotown/Workspace/algorithm_and_data_structure/pat_code/advanced_level/a1011.cpp -o CMakeFiles/a1011.dir/pat_code/advanced_level/a1011.cpp.s

CMakeFiles/a1011.dir/pat_code/advanced_level/a1011.cpp.o.requires:

.PHONY : CMakeFiles/a1011.dir/pat_code/advanced_level/a1011.cpp.o.requires

CMakeFiles/a1011.dir/pat_code/advanced_level/a1011.cpp.o.provides: CMakeFiles/a1011.dir/pat_code/advanced_level/a1011.cpp.o.requires
	$(MAKE) -f CMakeFiles/a1011.dir/build.make CMakeFiles/a1011.dir/pat_code/advanced_level/a1011.cpp.o.provides.build
.PHONY : CMakeFiles/a1011.dir/pat_code/advanced_level/a1011.cpp.o.provides

CMakeFiles/a1011.dir/pat_code/advanced_level/a1011.cpp.o.provides.build: CMakeFiles/a1011.dir/pat_code/advanced_level/a1011.cpp.o


# Object files for target a1011
a1011_OBJECTS = \
"CMakeFiles/a1011.dir/pat_code/advanced_level/a1011.cpp.o"

# External object files for target a1011
a1011_EXTERNAL_OBJECTS =

a1011: CMakeFiles/a1011.dir/pat_code/advanced_level/a1011.cpp.o
a1011: CMakeFiles/a1011.dir/build.make
a1011: CMakeFiles/a1011.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/hotown/Workspace/algorithm_and_data_structure/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable a1011"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/a1011.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/a1011.dir/build: a1011

.PHONY : CMakeFiles/a1011.dir/build

CMakeFiles/a1011.dir/requires: CMakeFiles/a1011.dir/pat_code/advanced_level/a1011.cpp.o.requires

.PHONY : CMakeFiles/a1011.dir/requires

CMakeFiles/a1011.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/a1011.dir/cmake_clean.cmake
.PHONY : CMakeFiles/a1011.dir/clean

CMakeFiles/a1011.dir/depend:
	cd /Users/hotown/Workspace/algorithm_and_data_structure/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/hotown/Workspace/algorithm_and_data_structure /Users/hotown/Workspace/algorithm_and_data_structure /Users/hotown/Workspace/algorithm_and_data_structure/cmake-build-debug /Users/hotown/Workspace/algorithm_and_data_structure/cmake-build-debug /Users/hotown/Workspace/algorithm_and_data_structure/cmake-build-debug/CMakeFiles/a1011.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/a1011.dir/depend

