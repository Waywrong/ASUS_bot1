#include "ros/ros.h"
#include "speech_recognition_msgs/SpeechRecognitionCandidates.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "voice_control");
  
  ros::NodeHandle nh;
  ros::Rate r(10);
    
  while(ros::ok())
  {
    //rvizFloorPlan();//later
    r.sleep();
    ros::spinOnce();
    
  }
  return 0;
}