# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /home/soumya/CLION/clion-2017.2.1/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/soumya/CLION/clion-2017.2.1/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/soumya/Desktop/desktop/githome/linkedListTemplate

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/soumya/Desktop/desktop/githome/linkedListTemplate/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/untitled.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/untitled.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/untitled.dir/flags.make

CMakeFiles/untitled.dir/main.cpp.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/soumya/Desktop/desktop/githome/linkedListTemplate/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/untitled.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled.dir/main.cpp.o -c /home/soumya/Desktop/desktop/githome/linkedListTemplate/main.cpp

CMakeFiles/untitled.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/soumya/Desktop/desktop/githome/linkedListTemplate/main.cpp > CMakeFiles/untitled.dir/main.cpp.i

CMakeFiles/untitled.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/soumya/Desktop/desktop/githome/linkedListTemplate/main.cpp -o CMakeFiles/untitled.dir/main.cpp.s

CMakeFiles/untitled.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/untitled.dir/main.cpp.o.requires

CMakeFiles/untitled.dir/main.cpp.o.provides: CMakeFiles/untitled.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/untitled.dir/build.make CMakeFiles/untitled.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/untitled.dir/main.cpp.o.provides

CMakeFiles/untitled.dir/main.cpp.o.provides.build: CMakeFiles/untitled.dir/main.cpp.o


CMakeFiles/untitled.dir/TemplateLinkedList.cpp.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/TemplateLinkedList.cpp.o: ../TemplateLinkedList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/soumya/Desktop/desktop/githome/linkedListTemplate/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/untitled.dir/TemplateLinkedList.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled.dir/TemplateLinkedList.cpp.o -c /home/soumya/Desktop/desktop/githome/linkedListTemplate/TemplateLinkedList.cpp

CMakeFiles/untitled.dir/TemplateLinkedList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled.dir/TemplateLinkedList.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/soumya/Desktop/desktop/githome/linkedListTemplate/TemplateLinkedList.cpp > CMakeFiles/untitled.dir/TemplateLinkedList.cpp.i

CMakeFiles/untitled.dir/TemplateLinkedList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled.dir/TemplateLinkedList.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/soumya/Desktop/desktop/githome/linkedListTemplate/TemplateLinkedList.cpp -o CMakeFiles/untitled.dir/TemplateLinkedList.cpp.s

CMakeFiles/untitled.dir/TemplateLinkedList.cpp.o.requires:

.PHONY : CMakeFiles/untitled.dir/TemplateLinkedList.cpp.o.requires

CMakeFiles/untitled.dir/TemplateLinkedList.cpp.o.provides: CMakeFiles/untitled.dir/TemplateLinkedList.cpp.o.requires
	$(MAKE) -f CMakeFiles/untitled.dir/build.make CMakeFiles/untitled.dir/TemplateLinkedList.cpp.o.provides.build
.PHONY : CMakeFiles/untitled.dir/TemplateLinkedList.cpp.o.provides

CMakeFiles/untitled.dir/TemplateLinkedList.cpp.o.provides.build: CMakeFiles/untitled.dir/TemplateLinkedList.cpp.o


# Object files for target untitled
untitled_OBJECTS = \
"CMakeFiles/untitled.dir/main.cpp.o" \
"CMakeFiles/untitled.dir/TemplateLinkedList.cpp.o"

# External object files for target untitled
untitled_EXTERNAL_OBJECTS =

untitled: CMakeFiles/untitled.dir/main.cpp.o
untitled: CMakeFiles/untitled.dir/TemplateLinkedList.cpp.o
untitled: CMakeFiles/untitled.dir/build.make
untitled: CMakeFiles/untitled.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/soumya/Desktop/desktop/githome/linkedListTemplate/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable untitled"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/untitled.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/untitled.dir/build: untitled

.PHONY : CMakeFiles/untitled.dir/build

CMakeFiles/untitled.dir/requires: CMakeFiles/untitled.dir/main.cpp.o.requires
CMakeFiles/untitled.dir/requires: CMakeFiles/untitled.dir/TemplateLinkedList.cpp.o.requires

.PHONY : CMakeFiles/untitled.dir/requires

CMakeFiles/untitled.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/untitled.dir/cmake_clean.cmake
.PHONY : CMakeFiles/untitled.dir/clean

CMakeFiles/untitled.dir/depend:
	cd /home/soumya/Desktop/desktop/githome/linkedListTemplate/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/soumya/Desktop/desktop/githome/linkedListTemplate /home/soumya/Desktop/desktop/githome/linkedListTemplate /home/soumya/Desktop/desktop/githome/linkedListTemplate/cmake-build-debug /home/soumya/Desktop/desktop/githome/linkedListTemplate/cmake-build-debug /home/soumya/Desktop/desktop/githome/linkedListTemplate/cmake-build-debug/CMakeFiles/untitled.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/untitled.dir/depend

