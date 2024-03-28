// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:action/Fibionnaci.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__ACTION__DETAIL__FIBIONNACI__BUILDER_HPP_
#define CUSTOM_INTERFACES__ACTION__DETAIL__FIBIONNACI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/action/detail/fibionnaci__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_Fibionnaci_Goal_order
{
public:
  Init_Fibionnaci_Goal_order()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::action::Fibionnaci_Goal order(::custom_interfaces::action::Fibionnaci_Goal::_order_type arg)
  {
    msg_.order = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::Fibionnaci_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::Fibionnaci_Goal>()
{
  return custom_interfaces::action::builder::Init_Fibionnaci_Goal_order();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_Fibionnaci_Result_sequence
{
public:
  Init_Fibionnaci_Result_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::action::Fibionnaci_Result sequence(::custom_interfaces::action::Fibionnaci_Result::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::Fibionnaci_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::Fibionnaci_Result>()
{
  return custom_interfaces::action::builder::Init_Fibionnaci_Result_sequence();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_Fibionnaci_Feedback_partial_sequence
{
public:
  Init_Fibionnaci_Feedback_partial_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::action::Fibionnaci_Feedback partial_sequence(::custom_interfaces::action::Fibionnaci_Feedback::_partial_sequence_type arg)
  {
    msg_.partial_sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::Fibionnaci_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::Fibionnaci_Feedback>()
{
  return custom_interfaces::action::builder::Init_Fibionnaci_Feedback_partial_sequence();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_Fibionnaci_SendGoal_Request_goal
{
public:
  explicit Init_Fibionnaci_SendGoal_Request_goal(::custom_interfaces::action::Fibionnaci_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::action::Fibionnaci_SendGoal_Request goal(::custom_interfaces::action::Fibionnaci_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::Fibionnaci_SendGoal_Request msg_;
};

class Init_Fibionnaci_SendGoal_Request_goal_id
{
public:
  Init_Fibionnaci_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibionnaci_SendGoal_Request_goal goal_id(::custom_interfaces::action::Fibionnaci_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Fibionnaci_SendGoal_Request_goal(msg_);
  }

private:
  ::custom_interfaces::action::Fibionnaci_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::Fibionnaci_SendGoal_Request>()
{
  return custom_interfaces::action::builder::Init_Fibionnaci_SendGoal_Request_goal_id();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_Fibionnaci_SendGoal_Response_stamp
{
public:
  explicit Init_Fibionnaci_SendGoal_Response_stamp(::custom_interfaces::action::Fibionnaci_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::action::Fibionnaci_SendGoal_Response stamp(::custom_interfaces::action::Fibionnaci_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::Fibionnaci_SendGoal_Response msg_;
};

class Init_Fibionnaci_SendGoal_Response_accepted
{
public:
  Init_Fibionnaci_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibionnaci_SendGoal_Response_stamp accepted(::custom_interfaces::action::Fibionnaci_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Fibionnaci_SendGoal_Response_stamp(msg_);
  }

private:
  ::custom_interfaces::action::Fibionnaci_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::Fibionnaci_SendGoal_Response>()
{
  return custom_interfaces::action::builder::Init_Fibionnaci_SendGoal_Response_accepted();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_Fibionnaci_GetResult_Request_goal_id
{
public:
  Init_Fibionnaci_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::action::Fibionnaci_GetResult_Request goal_id(::custom_interfaces::action::Fibionnaci_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::Fibionnaci_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::Fibionnaci_GetResult_Request>()
{
  return custom_interfaces::action::builder::Init_Fibionnaci_GetResult_Request_goal_id();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_Fibionnaci_GetResult_Response_result
{
public:
  explicit Init_Fibionnaci_GetResult_Response_result(::custom_interfaces::action::Fibionnaci_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::action::Fibionnaci_GetResult_Response result(::custom_interfaces::action::Fibionnaci_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::Fibionnaci_GetResult_Response msg_;
};

class Init_Fibionnaci_GetResult_Response_status
{
public:
  Init_Fibionnaci_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibionnaci_GetResult_Response_result status(::custom_interfaces::action::Fibionnaci_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Fibionnaci_GetResult_Response_result(msg_);
  }

private:
  ::custom_interfaces::action::Fibionnaci_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::Fibionnaci_GetResult_Response>()
{
  return custom_interfaces::action::builder::Init_Fibionnaci_GetResult_Response_status();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_Fibionnaci_FeedbackMessage_feedback
{
public:
  explicit Init_Fibionnaci_FeedbackMessage_feedback(::custom_interfaces::action::Fibionnaci_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::action::Fibionnaci_FeedbackMessage feedback(::custom_interfaces::action::Fibionnaci_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::Fibionnaci_FeedbackMessage msg_;
};

class Init_Fibionnaci_FeedbackMessage_goal_id
{
public:
  Init_Fibionnaci_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibionnaci_FeedbackMessage_feedback goal_id(::custom_interfaces::action::Fibionnaci_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Fibionnaci_FeedbackMessage_feedback(msg_);
  }

private:
  ::custom_interfaces::action::Fibionnaci_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::Fibionnaci_FeedbackMessage>()
{
  return custom_interfaces::action::builder::Init_Fibionnaci_FeedbackMessage_goal_id();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__ACTION__DETAIL__FIBIONNACI__BUILDER_HPP_
