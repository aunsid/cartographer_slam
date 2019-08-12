package cartographer_ros_msgs;

public interface SubmapQueryResponse extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "cartographer_ros_msgs/SubmapQueryResponse";
  static final java.lang.String _DEFINITION = "cartographer_ros_msgs/StatusResponse status\nint32 submap_version\ncartographer_ros_msgs/SubmapTexture[] textures";
  cartographer_ros_msgs.StatusResponse getStatus();
  void setStatus(cartographer_ros_msgs.StatusResponse value);
  int getSubmapVersion();
  void setSubmapVersion(int value);
  java.util.List<cartographer_ros_msgs.SubmapTexture> getTextures();
  void setTextures(java.util.List<cartographer_ros_msgs.SubmapTexture> value);
}
