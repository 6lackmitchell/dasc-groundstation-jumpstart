# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_vicon_px4_bridge_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED vicon_px4_bridge_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(vicon_px4_bridge_FOUND FALSE)
  elseif(NOT vicon_px4_bridge_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(vicon_px4_bridge_FOUND FALSE)
  endif()
  return()
endif()
set(_vicon_px4_bridge_CONFIG_INCLUDED TRUE)

# output package information
if(NOT vicon_px4_bridge_FIND_QUIETLY)
  message(STATUS "Found vicon_px4_bridge: 0.0.0 (${vicon_px4_bridge_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'vicon_px4_bridge' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${vicon_px4_bridge_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(vicon_px4_bridge_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${vicon_px4_bridge_DIR}/${_extra}")
endforeach()
