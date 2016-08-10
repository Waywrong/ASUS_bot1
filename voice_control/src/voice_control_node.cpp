#include "ros/ros.h"
#include "speech_recognition_msgs/SpeechRecognitionCandidates.h"

void speechCallback(const speech_recognition_msgs::SpeechRecognitionCandidatesPtr& msg)
{
  
  ROS_INFO("I heard: [%s]", msg->transcript.size());
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