import rclpy

import time

from rclpy.action import ActionServer
from rclpy.node import Node
from action_tutorials_interfaces.action import Fibonacci


class FibonacciActionServer(Node):
    def __init__(self):
        super().__init__("fibonacci_action_server")
        self._action_server = ActionServer(
            self, Fibonacci, "fibonacci", self.execute_callback
        )

    def execute_callback(self, goal_handle):
        self.get_logger().info("Executing goal...")
        goal_handle.succeed()
        result = Fibonacci.Result()  # Create an instance of the result class

        feedback_msg = Fibonacci.Feedback()
        feedback_msg.partial_sequence = [0, 1]

        # Fill the result instance
        for i in range(1, goal_handle.request.order):
            feedback_msg.partial_sequence.append(
                feedback_msg.partial_sequence[i] + feedback_msg.partial_sequence[i - 1]
            )
            self.get_logger().info(
                "Feedback: {0}".format(feedback_msg.partial_sequence)
            )
            goal_handle.publish_feedback(feedback_msg)
            time.sleep(1)

        result.sequence = feedback_msg.partial_sequence
        return result


def main(args=None):
    rclpy.init(args=args)

    node = FibonacciActionServer()

    rclpy.spin(node)

    rclpy.shutdown()


if __name__ == "__main__":
    main()
