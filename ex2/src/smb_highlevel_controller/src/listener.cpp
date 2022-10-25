#include "ros/ros.h"
#include "sensor_msgs/LaserScan.h"
#include "std_msgs/String.h"
void poseMessageReceived(const sensor_msgs::LaserScan::ConstPtr& scan)
{
    ROS_INFO("position=: [%f]",scan->range_min);
}
int main(int argc, char **argv)
{
    ros::init(argc, argv, "listener");
    ros::NodeHandle n;
    std::string topic;
    std::int32_t queue;
    ros::Subscriber sub=n.subscribe("scan",1000,poseMessageReceived);
    ros::spin();
    return 0;
}