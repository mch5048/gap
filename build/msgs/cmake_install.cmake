# Install script for directory: /home/irobot/Downloads/gap-dev/msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/gap-1.5/libgap_msgs.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/gap-1.5/libgap_msgs.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/gap-1.5/libgap_msgs.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/gap-1.5" TYPE SHARED_LIBRARY FILES "/home/irobot/Downloads/gap-dev/build/lib/libgap_msgs.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/gap-1.5/libgap_msgs.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/gap-1.5/libgap_msgs.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/gap-1.5/libgap_msgs.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gap-1.5" TYPE FILE FILES
    "/home/irobot/Downloads/gap-dev/build/msgs/camera_utils_request.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/camera_utils_response.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/point_projection.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/visual_utils_request.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/visual_utils_response.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/world_utils_request.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/world_utils_response.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/object.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/model_cmd.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/dr_request.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/dr_response.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/altimeter.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/any.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/axis.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/battery.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/boxgeom.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/camera_cmd.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/camera_lens.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/camerasensor.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/cessna.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/collision.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/color.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/contact.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/contacts.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/contactsensor.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/cylindergeom.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/diagnostics.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/distortion.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/factory.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/fluid.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/fog.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/friction.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/geometry.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/gps.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/gui.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/gui_camera.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/gz_string.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/gz_string_v.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/header.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/heightmapgeom.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/hydra.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/image.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/image_stamped.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/imagegeom.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/images_stamped.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/imu.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/inertial.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/int.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/joint.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/joint_animation.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/joint_cmd.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/joint_wrench.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/joint_wrench_stamped.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/joystick.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/laserscan.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/laserscan_stamped.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/light.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/link.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/link_data.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/log_control.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/log_playback_control.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/log_playback_stats.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/log_status.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/logical_camera_image.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/logical_camera_sensor.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/magnetometer.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/material.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/meshgeom.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/model.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/model_configuration.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/model_v.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/packet.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/physics.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/pid.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/planegeom.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/plugin.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/pointcloud.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/polylinegeom.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/pose.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/pose_animation.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/pose_stamped.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/pose_trajectory.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/pose_v.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/poses_stamped.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/projector.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/propagation_grid.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/propagation_particle.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/publish.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/publishers.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/quaternion.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/raysensor.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/request.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/response.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/rest_login.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/rest_logout.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/rest_post.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/rest_response.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/road.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/scene.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/selection.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/sensor.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/server_control.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/shadows.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/sim_event.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/sky.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/sonar.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/sonar_stamped.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/spheregeom.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/spherical_coordinates.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/subscribe.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/surface.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/tactile.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/test.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/time.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/topic_info.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/track_visual.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/undo_redo.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/user_cmd.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/user_cmd_stats.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/vector2d.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/vector3d.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/visual.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/wireless_node.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/wireless_nodes.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/world_control.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/world_modify.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/world_reset.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/world_stats.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/wrench.pb.h"
    "/home/irobot/Downloads/gap-dev/build/msgs/wrench_stamped.pb.h"
    )
endif()

