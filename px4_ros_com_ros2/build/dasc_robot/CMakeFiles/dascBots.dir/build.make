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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/px4_ros_com_ros2/src/robot-framework

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/px4_ros_com_ros2/build/dasc_robot

# Include any dependencies generated for this target.
include CMakeFiles/dascBots.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dascBots.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dascBots.dir/flags.make

CMakeFiles/dascBots.dir/src/DASCRobots.cpp.o: CMakeFiles/dascBots.dir/flags.make
CMakeFiles/dascBots.dir/src/DASCRobots.cpp.o: /root/px4_ros_com_ros2/src/robot-framework/src/DASCRobots.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/px4_ros_com_ros2/build/dasc_robot/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/dascBots.dir/src/DASCRobots.cpp.o"
	/usr/lib/ccache/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dascBots.dir/src/DASCRobots.cpp.o -c /root/px4_ros_com_ros2/src/robot-framework/src/DASCRobots.cpp

CMakeFiles/dascBots.dir/src/DASCRobots.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dascBots.dir/src/DASCRobots.cpp.i"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/px4_ros_com_ros2/src/robot-framework/src/DASCRobots.cpp > CMakeFiles/dascBots.dir/src/DASCRobots.cpp.i

CMakeFiles/dascBots.dir/src/DASCRobots.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dascBots.dir/src/DASCRobots.cpp.s"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/px4_ros_com_ros2/src/robot-framework/src/DASCRobots.cpp -o CMakeFiles/dascBots.dir/src/DASCRobots.cpp.s

# Object files for target dascBots
dascBots_OBJECTS = \
"CMakeFiles/dascBots.dir/src/DASCRobots.cpp.o"

# External object files for target dascBots
dascBots_EXTERNAL_OBJECTS =

libdascBots.a: CMakeFiles/dascBots.dir/src/DASCRobots.cpp.o
libdascBots.a: CMakeFiles/dascBots.dir/build.make
libdascBots.a: CMakeFiles/dascBots.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/px4_ros_com_ros2/build/dasc_robot/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libdascBots.a"
	$(CMAKE_COMMAND) -P CMakeFiles/dascBots.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dascBots.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dascBots.dir/build: libdascBots.a

.PHONY : CMakeFiles/dascBots.dir/build

CMakeFiles/dascBots.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/dascBots.dir/cmake_clean.cmake
.PHONY : CMakeFiles/dascBots.dir/clean

CMakeFiles/dascBots.dir/depend:
	cd /root/px4_ros_com_ros2/build/dasc_robot && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/px4_ros_com_ros2/src/robot-framework /root/px4_ros_com_ros2/src/robot-framework /root/px4_ros_com_ros2/build/dasc_robot /root/px4_ros_com_ros2/build/dasc_robot /root/px4_ros_com_ros2/build/dasc_robot/CMakeFiles/dascBots.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dascBots.dir/depend

