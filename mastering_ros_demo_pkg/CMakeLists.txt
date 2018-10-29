cmake_minimum_required(VERSION 2.8.3)
project(mastering_ros_demo_pkg)
add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
  actionlib
  actionlib_msgs
  roscpp
  std_msgs
  image_transport
  cv_bridge
  sensor_msgs
  message_generation
)

add_message_files(
  FILES
  demo_msg.msg
)

add_service_files(
  FILES
  demo_srv.srv
)

generate_messages(
  DEPENDENCIES
  std_msgs
  actionlib_msgs
)

catkin_package(
  CATKIN_DEPENDS actionlib actionlib_msgs roscpp std_msgs message_runtime
  INCLUDE_DIRS include
  DEPENDS system_lib
)

set(OpenCV_STATIC OFF)
find_package(  OpenCV REQUIRED )

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
  ${Boost_INCLUDE_DIRS}
  ${OpenCV_INCLUDE_DIRS}
)

add_executable(demo_topic_publisher src/demo_topic_publisher.cpp)
add_executable(demo_topic_subscriber src/demo_topic_subscriber.cpp)

add_dependencies(demo_topic_publisher mastering_ros_demo_pkg_generate_messages_cpp)
add_dependencies(demo_topic_subscriber mastering_ros_demo_pkg_generate_messages_cpp)

# Image Topic
add_executable(image_transport_subscriber src/image_transport_subscriber.cpp)
add_dependencies(image_transport_subscriber mastering_ros_demo_pkg_generate_messages_cpp)
target_link_libraries(image_transport_subscriber ${catkin_LIBRARIES} ${OpenCV_LIBS} ${Boost_LIBRARIES} ${GTK_LIBRARIES}
                                 ${GTK2_LIBRARIES})

target_link_libraries(demo_topic_publisher ${catkin_LIBRARIES})
target_link_libraries(demo_topic_subscriber ${catkin_LIBRARIES})

add_executable(demo_msg_publisher src/demo_msg_publisher.cpp)
add_executable(demo_msg_subscriber src/demo_msg_subscriber.cpp)

add_dependencies(demo_msg_publisher mastering_ros_demo_pkg_generate_messages_cpp)
add_dependencies(demo_msg_subscriber mastering_ros_demo_pkg_generate_messages_cpp)

target_link_libraries(demo_msg_publisher ${catkin_LIBRARIES})
target_link_libraries(demo_msg_subscriber ${catkin_LIBRARIES})
