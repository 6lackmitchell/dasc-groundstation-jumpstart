set(_AMENT_PACKAGE_NAME "vicon_px4_bridge")
set(vicon_px4_bridge_VERSION "0.0.0")
set(vicon_px4_bridge_MAINTAINER "root <chenrc@umich.edu>")
set(vicon_px4_bridge_BUILD_DEPENDS "eigen" "fastrtps" "fastcdr" "ros_environment" "px4_msgs" "rosidl_default_generators" "vicon_receiver" "geometry_msgs" "sensor_msgs" "tf2_ros" "launch" "launch_testing" "launch_testing_ros")
set(vicon_px4_bridge_BUILDTOOL_DEPENDS "ament_cmake" "eigen3_cmake_module")
set(vicon_px4_bridge_BUILD_EXPORT_DEPENDS "eigen" "vicon_receiver" "geometry_msgs" "sensor_msgs" "tf2_ros" "launch" "launch_testing" "launch_testing_ros")
set(vicon_px4_bridge_BUILDTOOL_EXPORT_DEPENDS "eigen3_cmake_module")
set(vicon_px4_bridge_EXEC_DEPENDS "rosidl_default_runtime" "vicon_receiver" "geometry_msgs" "sensor_msgs" "tf2_ros" "launch" "launch_testing" "launch_testing_ros")
set(vicon_px4_bridge_TEST_DEPENDS )
set(vicon_px4_bridge_GROUP_DEPENDS )
set(vicon_px4_bridge_MEMBER_OF_GROUPS )
set(vicon_px4_bridge_DEPRECATED "")
set(vicon_px4_bridge_EXPORT_TAGS)
list(APPEND vicon_px4_bridge_EXPORT_TAGS "<build_type>ament_cmake</build_type>")