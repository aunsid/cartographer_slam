package cartographer_ros_msgs;

public interface FinishTrajectoryResponse extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "cartographer_ros_msgs/FinishTrajectoryResponse";
  static final java.lang.String _DEFINITION = "cartographer_ros_msgs/StatusResponse status";
  cartographer_ros_msgs.StatusResponse getStatus();
  void setStatus(cartographer_ros_msgs.StatusResponse value);
}
