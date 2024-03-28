import rclpy
from rclpy.node import Node

from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
from turtlesim.srv import SetPen
from functools import partial


class TurtleController(Node):
    def __init__(self):
        super().__init__("turtle_controller")
        self.previos_x = 0.0
        self.get_logger().info("started node turtle_controller...")
        ## self.create_timer(0.5, self.timer_callback)
        self.create_subscription(Pose, "/turtle1/pose", self.pose_callback, 10)
        self.turtle_publisher = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)

    def pose_callback(self, msg: Pose):
        self.get_logger().info("received: x - " + str(msg.x) + " y - " + str(msg.y))
        sent = Twist()
        sent.linear.x = 1.0
        sent.angular.z = 0.0
        sent.linear.y = 0.5
        ## y-bounds : 1 && 10 and x-bounds : 0.7 && 10.5
        if msg.y <= 2 or msg.y >= 9:
            sent.angular.z = 0.5
            sent.linear.x = 0.0
            sent.linear.y = 1.0
        elif msg.x <= 2 or msg.x >= 9:
            sent.angular.z = 0.5
            sent.linear.x = 1.0
            sent.linear.y = 0.0
        self.get_logger().info("publishing: " + str(sent))
        self.turtle_publisher.publish(sent)

        if msg.x > 5.5 and self.previos_x <= 5.5:
            self.previos_x = msg.x
            self.get_logger().info("changing color to red...")
            self.call_set_pen_service(255, 0, 0, 5, 0)
        elif msg.x < 5.5 and self.previos_x >= 5.5:
            self.previos_x = msg.x
            self.get_logger().info("changing color to blue...")
            self.call_set_pen_service(0, 0, 255, 5, 0)

    def call_set_pen_service(self, r: int, g: int, b: int, width: int, off: int):
        client = self.create_client(SetPen, "/turtle1/set_pen")
        while not client.wait_for_service(1.0):
            self.get_logger().warn("waiting for service set_pen...")
        request = SetPen.Request()
        request.r = r
        request.g = g
        request.b = b
        request.width = width
        request.off = off
        future = client.call_async(request)
        future.add_done_callback(partial(self.future_callback))

    def future_callback(self, future):
        try:
            response = future.result()
            self.get_logger().info("response: " + str(response))
        except Exception as e:
            self.get_logger().error("service call failed %r" % (e,))


def main(args=None):
    rclpy.init(args=args)
    node = TurtleController()
    rclpy.spin(node)
    rclpy.shutdown()
