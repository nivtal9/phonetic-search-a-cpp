# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /snap/clion/107/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/107/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/avi/CLionProjects/phonetic-search-a-cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/avi/CLionProjects/phonetic-search-a-cpp/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/phonetic_search_a.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/phonetic_search_a.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/phonetic_search_a.dir/flags.make

CMakeFiles/phonetic_search_a.dir/PhoneticFinder.cpp.o: CMakeFiles/phonetic_search_a.dir/flags.make
CMakeFiles/phonetic_search_a.dir/PhoneticFinder.cpp.o: ../PhoneticFinder.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/avi/CLionProjects/phonetic-search-a-cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/phonetic_search_a.dir/PhoneticFinder.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/phonetic_search_a.dir/PhoneticFinder.cpp.o -c /home/avi/CLionProjects/phonetic-search-a-cpp/PhoneticFinder.cpp

CMakeFiles/phonetic_search_a.dir/PhoneticFinder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/phonetic_search_a.dir/PhoneticFinder.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/avi/CLionProjects/phonetic-search-a-cpp/PhoneticFinder.cpp > CMakeFiles/phonetic_search_a.dir/PhoneticFinder.cpp.i

CMakeFiles/phonetic_search_a.dir/PhoneticFinder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/phonetic_search_a.dir/PhoneticFinder.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/avi/CLionProjects/phonetic-search-a-cpp/PhoneticFinder.cpp -o CMakeFiles/phonetic_search_a.dir/PhoneticFinder.cpp.s

CMakeFiles/phonetic_search_a.dir/Test.cpp.o: CMakeFiles/phonetic_search_a.dir/flags.make
CMakeFiles/phonetic_search_a.dir/Test.cpp.o: ../Test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/avi/CLionProjects/phonetic-search-a-cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/phonetic_search_a.dir/Test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/phonetic_search_a.dir/Test.cpp.o -c /home/avi/CLionProjects/phonetic-search-a-cpp/Test.cpp

CMakeFiles/phonetic_search_a.dir/Test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/phonetic_search_a.dir/Test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/avi/CLionProjects/phonetic-search-a-cpp/Test.cpp > CMakeFiles/phonetic_search_a.dir/Test.cpp.i

CMakeFiles/phonetic_search_a.dir/Test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/phonetic_search_a.dir/Test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/avi/CLionProjects/phonetic-search-a-cpp/Test.cpp -o CMakeFiles/phonetic_search_a.dir/Test.cpp.s

CMakeFiles/phonetic_search_a.dir/Demo.cpp.o: CMakeFiles/phonetic_search_a.dir/flags.make
CMakeFiles/phonetic_search_a.dir/Demo.cpp.o: ../Demo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/avi/CLionProjects/phonetic-search-a-cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/phonetic_search_a.dir/Demo.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/phonetic_search_a.dir/Demo.cpp.o -c /home/avi/CLionProjects/phonetic-search-a-cpp/Demo.cpp

CMakeFiles/phonetic_search_a.dir/Demo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/phonetic_search_a.dir/Demo.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/avi/CLionProjects/phonetic-search-a-cpp/Demo.cpp > CMakeFiles/phonetic_search_a.dir/Demo.cpp.i

CMakeFiles/phonetic_search_a.dir/Demo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/phonetic_search_a.dir/Demo.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/avi/CLionProjects/phonetic-search-a-cpp/Demo.cpp -o CMakeFiles/phonetic_search_a.dir/Demo.cpp.s

CMakeFiles/phonetic_search_a.dir/TestCounter.cpp.o: CMakeFiles/phonetic_search_a.dir/flags.make
CMakeFiles/phonetic_search_a.dir/TestCounter.cpp.o: ../TestCounter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/avi/CLionProjects/phonetic-search-a-cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/phonetic_search_a.dir/TestCounter.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/phonetic_search_a.dir/TestCounter.cpp.o -c /home/avi/CLionProjects/phonetic-search-a-cpp/TestCounter.cpp

CMakeFiles/phonetic_search_a.dir/TestCounter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/phonetic_search_a.dir/TestCounter.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/avi/CLionProjects/phonetic-search-a-cpp/TestCounter.cpp > CMakeFiles/phonetic_search_a.dir/TestCounter.cpp.i

CMakeFiles/phonetic_search_a.dir/TestCounter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/phonetic_search_a.dir/TestCounter.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/avi/CLionProjects/phonetic-search-a-cpp/TestCounter.cpp -o CMakeFiles/phonetic_search_a.dir/TestCounter.cpp.s

CMakeFiles/phonetic_search_a.dir/TestExample.cpp.o: CMakeFiles/phonetic_search_a.dir/flags.make
CMakeFiles/phonetic_search_a.dir/TestExample.cpp.o: ../TestExample.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/avi/CLionProjects/phonetic-search-a-cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/phonetic_search_a.dir/TestExample.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/phonetic_search_a.dir/TestExample.cpp.o -c /home/avi/CLionProjects/phonetic-search-a-cpp/TestExample.cpp

CMakeFiles/phonetic_search_a.dir/TestExample.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/phonetic_search_a.dir/TestExample.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/avi/CLionProjects/phonetic-search-a-cpp/TestExample.cpp > CMakeFiles/phonetic_search_a.dir/TestExample.cpp.i

CMakeFiles/phonetic_search_a.dir/TestExample.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/phonetic_search_a.dir/TestExample.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/avi/CLionProjects/phonetic-search-a-cpp/TestExample.cpp -o CMakeFiles/phonetic_search_a.dir/TestExample.cpp.s

# Object files for target phonetic_search_a
phonetic_search_a_OBJECTS = \
"CMakeFiles/phonetic_search_a.dir/PhoneticFinder.cpp.o" \
"CMakeFiles/phonetic_search_a.dir/Test.cpp.o" \
"CMakeFiles/phonetic_search_a.dir/Demo.cpp.o" \
"CMakeFiles/phonetic_search_a.dir/TestCounter.cpp.o" \
"CMakeFiles/phonetic_search_a.dir/TestExample.cpp.o"

# External object files for target phonetic_search_a
phonetic_search_a_EXTERNAL_OBJECTS =

phonetic_search_a: CMakeFiles/phonetic_search_a.dir/PhoneticFinder.cpp.o
phonetic_search_a: CMakeFiles/phonetic_search_a.dir/Test.cpp.o
phonetic_search_a: CMakeFiles/phonetic_search_a.dir/Demo.cpp.o
phonetic_search_a: CMakeFiles/phonetic_search_a.dir/TestCounter.cpp.o
phonetic_search_a: CMakeFiles/phonetic_search_a.dir/TestExample.cpp.o
phonetic_search_a: CMakeFiles/phonetic_search_a.dir/build.make
phonetic_search_a: CMakeFiles/phonetic_search_a.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/avi/CLionProjects/phonetic-search-a-cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable phonetic_search_a"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/phonetic_search_a.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/phonetic_search_a.dir/build: phonetic_search_a

.PHONY : CMakeFiles/phonetic_search_a.dir/build

CMakeFiles/phonetic_search_a.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/phonetic_search_a.dir/cmake_clean.cmake
.PHONY : CMakeFiles/phonetic_search_a.dir/clean

CMakeFiles/phonetic_search_a.dir/depend:
	cd /home/avi/CLionProjects/phonetic-search-a-cpp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/avi/CLionProjects/phonetic-search-a-cpp /home/avi/CLionProjects/phonetic-search-a-cpp /home/avi/CLionProjects/phonetic-search-a-cpp/cmake-build-debug /home/avi/CLionProjects/phonetic-search-a-cpp/cmake-build-debug /home/avi/CLionProjects/phonetic-search-a-cpp/cmake-build-debug/CMakeFiles/phonetic_search_a.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/phonetic_search_a.dir/depend

