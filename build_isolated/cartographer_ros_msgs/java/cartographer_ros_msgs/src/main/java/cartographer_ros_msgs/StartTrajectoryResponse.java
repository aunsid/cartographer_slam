package cartographer_ros_msgs;

public interface StartTrajectoryResponse extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "cartographer_ros_msgs/StartTrajectoryResponse";
  static final java.lang.String _DEFINITION = "cartographer_ros_msgs/StatusResponse status\nint32 trajectory_id";
  cartographer_ros_msgs.StatusResponse getStatus();
  void setStatus(cartographer_ros_msgs.StatusResponse value);
  int getTrajectoryId();
  void setTrajectoryId(int value);
}
