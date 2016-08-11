
```
#!python
1. set the "Google Voice Typing" in android to English.
2. git clone https://github.com/jsk-ros-pkg/jsk_common_msgs.git
3. rosrun voice_control voice_control_node

Android app for publishing speech-to-text results as ROS topic.

You have to configure Speech-To-Text from Setting > Language & Input > Google Voice Typing

You can subscribe the recognized voice text as:

 rostopic echo /Tablet/voice

Reference:
https://github.com/jsk-ros-pkg/jsk_smart_apps/tree/3250218082655574f89a86285a903bc4496143bf/jsk_android_apps
https://play.google.com/store/apps/details?id=org.ros.android.android_voice_message
```