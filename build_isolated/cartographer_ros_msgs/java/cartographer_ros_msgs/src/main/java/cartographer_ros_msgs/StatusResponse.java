package cartographer_ros_msgs;

public interface StatusResponse extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "cartographer_ros_msgs/StatusResponse";
  static final java.lang.String _DEFINITION = "# Copyright 2018 The Cartographer Authors\n#\n# Licensed under the Apache License, Version 2.0 (the \"License\");\n# you may not use this file except in compliance with the License.\n# You may obtain a copy of the License at\n#\n#      http://www.apache.org/licenses/LICENSE-2.0\n#\n# Unless required by applicable law or agreed to in writing, software\n# distributed under the License is distributed on an \"AS IS\" BASIS,\n# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n# See the License for the specific language governing permissions and\n# limitations under the License.\n\n# A common message type to indicate the outcome of a service call.\nuint8 code\nstring message\n";
  byte getCode();
  void setCode(byte value);
  java.lang.String getMessage();
  void setMessage(java.lang.String value);
}