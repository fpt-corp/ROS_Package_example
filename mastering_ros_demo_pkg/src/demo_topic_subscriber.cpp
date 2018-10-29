#include "ros/ros.h"
#include "std_msgs/Float32.h"
#include <iostream>

void number_callback(const std_msgs::Float32::ConstPtr& msg) {
    ROS_INFO("Received [%f]",msg->data);
}

int main(int argc, char **argv) { 
    ros::init(argc, argv,"demo_topic_subscriber");
    ros::NodeHandle node_obj;
    ros::Subscriber number_subscriber = node_obj.subscribe("/rpm",10,number_callback);
    ros::spin();
    return 0;
}