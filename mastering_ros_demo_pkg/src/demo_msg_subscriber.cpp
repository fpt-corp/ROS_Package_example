#include "ros/ros.h"
#include "mastering_ros_demo_pkg/demo_msg.h"
#include <iostream>

void number_callback(const mastering_ros_demo_pkg::demo_msg::ConstPtr& msg) {
    ROS_INFO("Received [%f]",msg->number);
}

int main(int argc, char **argv) { 
    ros::init(argc, argv,"demo_msg_subscriber");
    ros::NodeHandle node_obj;
    ros::Subscriber number_subscriber = node_obj.subscribe("/Accelerate",10,number_callback);
    ros::spin();
    return 0;
}