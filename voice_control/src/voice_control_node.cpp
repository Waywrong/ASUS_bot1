#include <string>
#include "ros/ros.h"
#include "jsk_gui_msgs/VoiceMessage.h"

int voiceCMDcetner()
{
  return 0;
}

void speechCallback(const jsk_gui_msgs::VoiceMessageConstPtr & msg)
{
  std::string voiceString[5];
  for (int i=0; i<msg->texts.size(); ++i)
  {
    //ROS_INFO_STREAM("CMD" << i << ": " << msg->texts[i] );
    voiceString[i] = msg->texts[i];
    ROS_INFO_STREAM("CMD" << i << ": " << voiceString[i] );
  }
  
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "voice_control");
  
  ros::NodeHandle nh;
  ros::Rate r(10);
  ros::Subscriber speech_Sub = nh.subscribe("/Tablet/voice", 10, speechCallback);
  while(ros::ok())
  {
    
    r.sleep();
    ros::spinOnce();
    
  }
  return 0;
}