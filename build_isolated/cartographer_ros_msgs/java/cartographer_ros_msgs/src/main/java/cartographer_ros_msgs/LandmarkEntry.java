package cartographer_ros_msgs;

public interface LandmarkEntry extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "cartographer_ros_msgs/LandmarkEntry";
  static final java.lang.String _DEFINITION = "# 2018 The Cartographer Authors\n#\n# Licensed under the Apache License, Version 2.0 (the \"License\");\n# you may not use this file except in compliance with the License.\n# You may obtain a copy of the License at\n#\n#      http://www.apache.org/licenses/LICENSE-2.0\n#\n# Unless required by applicable law or agreed to in writing, software\n# distributed under the License is distributed on an \"AS IS\" BASIS,\n# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n# See the License for the specific language governing permissions and\n# limitations under the License.\n\nstring id\ngeometry_msgs/Pose tracking_from_landmark_transform\nfloat64 translation_weight\nfloat64 rotation_weight\n";
  java.lang.String getId();
  void setId(java.lang.String value);
  geometry_msgs.Pose getTrackingFromLandmarkTransform();
  void setTrackingFromLandmarkTransform(geometry_msgs.Pose value);
  double getTranslationWeight();
  void setTranslationWeight(double value);
  double getRotationWeight();
  void setRotationWeight(double value);
}
