package cartographer_ros_msgs;

public interface LandmarkList extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "cartographer_ros_msgs/LandmarkList";
  static final java.lang.String _DEFINITION = "# Copyright 2018 The Cartographer Authors\n#\n# Licensed under the Apache License, Version 2.0 (the \"License\");\n# you may not use this file except in compliance with the License.\n# You may obtain a copy of the License at\n#\n#      http://www.apache.org/licenses/LICENSE-2.0\n#\n# Unless required by applicable law or agreed to in writing, software\n# distributed under the License is distributed on an \"AS IS\" BASIS,\n# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n# See the License for the specific language governing permissions and\n# limitations under the License.\n\nstd_msgs/Header header\ncartographer_ros_msgs/LandmarkEntry[] landmark\n";
  std_msgs.Header getHeader();
  void setHeader(std_msgs.Header value);
  java.util.List<cartographer_ros_msgs.LandmarkEntry> getLandmark();
  void setLandmark(java.util.List<cartographer_ros_msgs.LandmarkEntry> value);
}
