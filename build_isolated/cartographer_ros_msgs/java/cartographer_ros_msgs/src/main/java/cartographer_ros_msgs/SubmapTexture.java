package cartographer_ros_msgs;

public interface SubmapTexture extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "cartographer_ros_msgs/SubmapTexture";
  static final java.lang.String _DEFINITION = "# Copyright 2017 The Cartographer Authors\n#\n# Licensed under the Apache License, Version 2.0 (the \"License\");\n# you may not use this file except in compliance with the License.\n# You may obtain a copy of the License at\n#\n#      http://www.apache.org/licenses/LICENSE-2.0\n#\n# Unless required by applicable law or agreed to in writing, software\n# distributed under the License is distributed on an \"AS IS\" BASIS,\n# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n# See the License for the specific language governing permissions and\n# limitations under the License.\n\nuint8[] cells\nint32 width\nint32 height\nfloat64 resolution\ngeometry_msgs/Pose slice_pose\n";
  org.jboss.netty.buffer.ChannelBuffer getCells();
  void setCells(org.jboss.netty.buffer.ChannelBuffer value);
  int getWidth();
  void setWidth(int value);
  int getHeight();
  void setHeight(int value);
  double getResolution();
  void setResolution(double value);
  geometry_msgs.Pose getSlicePose();
  void setSlicePose(geometry_msgs.Pose value);
}
