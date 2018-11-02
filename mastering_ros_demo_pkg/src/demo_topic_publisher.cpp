#include "ros/ros.h"
#include "std_msgs/Float32.h"
#include <iostream>
int main(int argc, char **argv)
{
    ros::init(argc, argv,"demo_topic_publisher");
    ros::NodeHandle node_obj;
    ros::Publisher number_publisher =
    node_obj.advertise<std_msgs::Float32>("/Accelerate",10);
    ros::Rate loop_rate(10);
    int number_count = 0;
    while (ros::ok())
    {
        std_msgs::Float32 msg;
        msg.data = number_count;
        ROS_INFO("%f",msg.data);
        number_publisher.publish(msg);
        ros::spinOnce();
        loop_rate.sleep();
        ++number_count;
    }
    return 0;
}
