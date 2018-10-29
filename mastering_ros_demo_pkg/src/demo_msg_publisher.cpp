#include "ros/ros.h"
#include "mastering_ros_demo_pkg/demo_msg.h"
#include <iostream>
int main(int argc, char **argv)
{
    ros::init(argc, argv,"demo_msg_publisher");
    ros::NodeHandle node_obj;
    ros::Publisher number_publisher =
    node_obj.advertise<mastering_ros_demo_pkg::demo_msg>("/Accelerate",10);
    ros::Rate loop_rate(10);
    int number_count = 0;
    while (ros::ok())
    {
        mastering_ros_demo_pkg::demo_msg msg;
        msg.number = (float) number_count;
        ROS_INFO("%f",msg.number);
        number_publisher.publish(msg);
        ros::spinOnce();
        loop_rate.sleep();
        ++number_count;
    }
    return 0;
}
