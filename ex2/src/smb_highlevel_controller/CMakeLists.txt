cmake_minimum_required(VERSION 3.0.2)
project(smb_highlevel_controller)
find_package(catkin REQUIRED COMPONENTS
  roscpp
  sensor_msgs
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES smb_highlevel_controller
#  CATKIN_DEPENDS roscpp sensor_msgs
#  DEPENDS system_lib
)
include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

 add_executable(listener_node src/listener.cpp)

target_link_libraries(listener_node
   ${catkin_LIBRARIES}
)
