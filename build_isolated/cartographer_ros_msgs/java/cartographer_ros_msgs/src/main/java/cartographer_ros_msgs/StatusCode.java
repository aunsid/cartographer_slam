package cartographer_ros_msgs;

public interface StatusCode extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "cartographer_ros_msgs/StatusCode";
  static final java.lang.String _DEFINITION = "# Copyright 2018 The Cartographer Authors\n#\n# Licensed under the Apache License, Version 2.0 (the \"License\");\n# you may not use this file except in compliance with the License.\n# You may obtain a copy of the License at\n#\n#      http://www.apache.org/licenses/LICENSE-2.0\n#\n# Unless required by applicable law or agreed to in writing, software\n# distributed under the License is distributed on an \"AS IS\" BASIS,\n# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n# See the License for the specific language governing permissions and\n# limitations under the License.\n\n# Definition of status code constants equivalent to the gRPC API.\n# https://developers.google.com/maps-booking/reference/grpc-api/status_codes\nuint8 OK=0\nuint8 CANCELLED=1\nuint8 UNKNOWN=2\nuint8 INVALID_ARGUMENT=3\nuint8 DEADLINE_EXCEEDED=4\nuint8 NOT_FOUND=5\nuint8 ALREADY_EXISTS=6\nuint8 PERMISSION_DENIED=7\nuint8 RESOURCE_EXHAUSTED=8\nuint8 FAILED_PRECONDITION=9\nuint8 ABORTED=10\nuint8 OUT_OF_RANGE=11\nuint8 UNIMPLEMENTED=12\nuint8 INTERNAL=13\nuint8 UNAVAILABLE=14\nuint8 DATA_LOSS=15\n";
  static final byte OK = 0;
  static final byte CANCELLED = 1;
  static final byte UNKNOWN = 2;
  static final byte INVALID_ARGUMENT = 3;
  static final byte DEADLINE_EXCEEDED = 4;
  static final byte NOT_FOUND = 5;
  static final byte ALREADY_EXISTS = 6;
  static final byte PERMISSION_DENIED = 7;
  static final byte RESOURCE_EXHAUSTED = 8;
  static final byte FAILED_PRECONDITION = 9;
  static final byte ABORTED = 10;
  static final byte OUT_OF_RANGE = 11;
  static final byte UNIMPLEMENTED = 12;
  static final byte INTERNAL = 13;
  static final byte UNAVAILABLE = 14;
  static final byte DATA_LOSS = 15;
}
