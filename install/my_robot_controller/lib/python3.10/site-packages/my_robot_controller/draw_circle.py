import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

class DrawCircle(Node):
    
    def __init__(self):
        super().__init__('draw_circle')
        self.cmd_vel_pub = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        self.timer = self.create_timer(0.5, self.send_velocity_command)
        self.get_logger().info('drawing circle...')

    def send_velocity_command(self):
        message = Twist()
        message.linear.x = 2.0
        message.angular.z = 1.0
        self.cmd_vel_pub.publish(message)


def main(args=None):
    rclpy.init(args=args)
    node = DrawCircle()
    rclpy.spin(node)
    rclpy.shutdown()