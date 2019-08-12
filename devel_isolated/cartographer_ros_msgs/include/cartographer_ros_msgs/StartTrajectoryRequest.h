// Generated by gencpp from file cartographer_ros_msgs/StartTrajectoryRequest.msg
// DO NOT EDIT!


#ifndef CARTOGRAPHER_ROS_MSGS_MESSAGE_STARTTRAJECTORYREQUEST_H
#define CARTOGRAPHER_ROS_MSGS_MESSAGE_STARTTRAJECTORYREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <cartographer_ros_msgs/TrajectoryOptions.h>
#include <cartographer_ros_msgs/SensorTopics.h>

namespace cartographer_ros_msgs
{
template <class ContainerAllocator>
struct StartTrajectoryRequest_
{
  typedef StartTrajectoryRequest_<ContainerAllocator> Type;

  StartTrajectoryRequest_()
    : options()
    , topics()  {
    }
  StartTrajectoryRequest_(const ContainerAllocator& _alloc)
    : options(_alloc)
    , topics(_alloc)  {
  (void)_alloc;
    }



   typedef  ::cartographer_ros_msgs::TrajectoryOptions_<ContainerAllocator>  _options_type;
  _options_type options;

   typedef  ::cartographer_ros_msgs::SensorTopics_<ContainerAllocator>  _topics_type;
  _topics_type topics;





  typedef boost::shared_ptr< ::cartographer_ros_msgs::StartTrajectoryRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cartographer_ros_msgs::StartTrajectoryRequest_<ContainerAllocator> const> ConstPtr;

}; // struct StartTrajectoryRequest_

typedef ::cartographer_ros_msgs::StartTrajectoryRequest_<std::allocator<void> > StartTrajectoryRequest;

typedef boost::shared_ptr< ::cartographer_ros_msgs::StartTrajectoryRequest > StartTrajectoryRequestPtr;
typedef boost::shared_ptr< ::cartographer_ros_msgs::StartTrajectoryRequest const> StartTrajectoryRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cartographer_ros_msgs::StartTrajectoryRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cartographer_ros_msgs::StartTrajectoryRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cartographer_ros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'cartographer_ros_msgs': ['/home/nuc/slam_ws/src/cartographer_ros/cartographer_ros_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cartographer_ros_msgs::StartTrajectoryRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cartographer_ros_msgs::StartTrajectoryRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cartographer_ros_msgs::StartTrajectoryRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cartographer_ros_msgs::StartTrajectoryRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cartographer_ros_msgs::StartTrajectoryRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cartographer_ros_msgs::StartTrajectoryRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cartographer_ros_msgs::StartTrajectoryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0780da312468afe59b45454db35b17ed";
  }

  static const char* value(const ::cartographer_ros_msgs::StartTrajectoryRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0780da312468afe5ULL;
  static const uint64_t static_value2 = 0x9b45454db35b17edULL;
};

template<class ContainerAllocator>
struct DataType< ::cartographer_ros_msgs::StartTrajectoryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cartographer_ros_msgs/StartTrajectoryRequest";
  }

  static const char* value(const ::cartographer_ros_msgs::StartTrajectoryRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cartographer_ros_msgs::StartTrajectoryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
cartographer_ros_msgs/TrajectoryOptions options\n\
cartographer_ros_msgs/SensorTopics topics\n\
\n\
================================================================================\n\
MSG: cartographer_ros_msgs/TrajectoryOptions\n\
# Copyright 2016 The Cartographer Authors\n\
#\n\
# Licensed under the Apache License, Version 2.0 (the \"License\");\n\
# you may not use this file except in compliance with the License.\n\
# You may obtain a copy of the License at\n\
#\n\
#      http://www.apache.org/licenses/LICENSE-2.0\n\
#\n\
# Unless required by applicable law or agreed to in writing, software\n\
# distributed under the License is distributed on an \"AS IS\" BASIS,\n\
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n\
# See the License for the specific language governing permissions and\n\
# limitations under the License.\n\
\n\
string tracking_frame\n\
string published_frame\n\
string odom_frame\n\
bool provide_odom_frame\n\
bool use_odometry\n\
bool use_nav_sat\n\
bool use_landmarks\n\
bool publish_frame_projected_to_2d\n\
int32 num_laser_scans\n\
int32 num_multi_echo_laser_scans\n\
int32 num_subdivisions_per_laser_scan\n\
int32 num_point_clouds\n\
float64 rangefinder_sampling_ratio\n\
float64 odometry_sampling_ratio\n\
float64 fixed_frame_pose_sampling_ratio\n\
float64 imu_sampling_ratio\n\
float64 landmarks_sampling_ratio\n\
\n\
# This is a binary-encoded\n\
# 'cartographer.mapping.proto.TrajectoryBuilderOptions' proto.\n\
string trajectory_builder_options_proto\n\
\n\
================================================================================\n\
MSG: cartographer_ros_msgs/SensorTopics\n\
# Copyright 2016 The Cartographer Authors\n\
#\n\
# Licensed under the Apache License, Version 2.0 (the \"License\");\n\
# you may not use this file except in compliance with the License.\n\
# You may obtain a copy of the License at\n\
#\n\
#      http://www.apache.org/licenses/LICENSE-2.0\n\
#\n\
# Unless required by applicable law or agreed to in writing, software\n\
# distributed under the License is distributed on an \"AS IS\" BASIS,\n\
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n\
# See the License for the specific language governing permissions and\n\
# limitations under the License.\n\
\n\
string laser_scan_topic\n\
string multi_echo_laser_scan_topic\n\
string point_cloud2_topic\n\
string imu_topic\n\
string odometry_topic\n\
string nav_sat_fix_topic\n\
string landmark_topic\n\
";
  }

  static const char* value(const ::cartographer_ros_msgs::StartTrajectoryRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cartographer_ros_msgs::StartTrajectoryRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.options);
      stream.next(m.topics);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StartTrajectoryRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cartographer_ros_msgs::StartTrajectoryRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cartographer_ros_msgs::StartTrajectoryRequest_<ContainerAllocator>& v)
  {
    s << indent << "options: ";
    s << std::endl;
    Printer< ::cartographer_ros_msgs::TrajectoryOptions_<ContainerAllocator> >::stream(s, indent + "  ", v.options);
    s << indent << "topics: ";
    s << std::endl;
    Printer< ::cartographer_ros_msgs::SensorTopics_<ContainerAllocator> >::stream(s, indent + "  ", v.topics);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CARTOGRAPHER_ROS_MSGS_MESSAGE_STARTTRAJECTORYREQUEST_H
