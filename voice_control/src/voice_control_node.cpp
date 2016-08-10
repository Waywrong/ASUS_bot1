#include "ros/ros.h"
#include "jsk_gui_msgs/VoiceMessage.h"

void speechCallback(const jsk_gui_msgs::VoiceMessageConstPtr & msg)
{
  for (int i=0; i<msg->texts.size(); ++i)
  {
      ROS_INFO_STREAM("CMD" << i << ": " << msg->texts[i] );

  }
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "voice_control");
  
  ros::NodeHandle nh;
  ros::Rate r(10);
  ros::Subscriber speech_Sub = nh.subscribe("/Tablet/voice", 1000, speechCallback);
  ROS_INFO("voice on");
  while(ros::ok())
  {
    
    r.sleep();
    ros::spinOnce();
    
  }
  return 0;
}