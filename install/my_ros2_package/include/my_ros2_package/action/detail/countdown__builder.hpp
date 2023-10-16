// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_ros2_package:action/Countdown.idl
// generated code does not contain a copyright notice

#ifndef MY_ROS2_PACKAGE__ACTION__DETAIL__COUNTDOWN__BUILDER_HPP_
#define MY_ROS2_PACKAGE__ACTION__DETAIL__COUNTDOWN__BUILDER_HPP_

#include "my_ros2_package/action/detail/countdown__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace my_ros2_package
{

namespace action
{

namespace builder
{

class Init_Countdown_Goal_starting_num
{
public:
  Init_Countdown_Goal_starting_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_ros2_package::action::Countdown_Goal starting_num(::my_ros2_package::action::Countdown_Goal::_starting_num_type arg)
  {
    msg_.starting_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ros2_package::action::Countdown_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ros2_package::action::Countdown_Goal>()
{
  return my_ros2_package::action::builder::Init_Countdown_Goal_starting_num();
}

}  // namespace my_ros2_package


namespace my_ros2_package
{

namespace action
{

namespace builder
{

class Init_Countdown_Result_is_finished
{
public:
  Init_Countdown_Result_is_finished()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_ros2_package::action::Countdown_Result is_finished(::my_ros2_package::action::Countdown_Result::_is_finished_type arg)
  {
    msg_.is_finished = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ros2_package::action::Countdown_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ros2_package::action::Countdown_Result>()
{
  return my_ros2_package::action::builder::Init_Countdown_Result_is_finished();
}

}  // namespace my_ros2_package


namespace my_ros2_package
{

namespace action
{

namespace builder
{

class Init_Countdown_Feedback_current_num
{
public:
  Init_Countdown_Feedback_current_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_ros2_package::action::Countdown_Feedback current_num(::my_ros2_package::action::Countdown_Feedback::_current_num_type arg)
  {
    msg_.current_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ros2_package::action::Countdown_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ros2_package::action::Countdown_Feedback>()
{
  return my_ros2_package::action::builder::Init_Countdown_Feedback_current_num();
}

}  // namespace my_ros2_package


namespace my_ros2_package
{

namespace action
{

namespace builder
{

class Init_Countdown_SendGoal_Request_goal
{
public:
  explicit Init_Countdown_SendGoal_Request_goal(::my_ros2_package::action::Countdown_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::my_ros2_package::action::Countdown_SendGoal_Request goal(::my_ros2_package::action::Countdown_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ros2_package::action::Countdown_SendGoal_Request msg_;
};

class Init_Countdown_SendGoal_Request_goal_id
{
public:
  Init_Countdown_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Countdown_SendGoal_Request_goal goal_id(::my_ros2_package::action::Countdown_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Countdown_SendGoal_Request_goal(msg_);
  }

private:
  ::my_ros2_package::action::Countdown_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ros2_package::action::Countdown_SendGoal_Request>()
{
  return my_ros2_package::action::builder::Init_Countdown_SendGoal_Request_goal_id();
}

}  // namespace my_ros2_package


namespace my_ros2_package
{

namespace action
{

namespace builder
{

class Init_Countdown_SendGoal_Response_stamp
{
public:
  explicit Init_Countdown_SendGoal_Response_stamp(::my_ros2_package::action::Countdown_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::my_ros2_package::action::Countdown_SendGoal_Response stamp(::my_ros2_package::action::Countdown_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ros2_package::action::Countdown_SendGoal_Response msg_;
};

class Init_Countdown_SendGoal_Response_accepted
{
public:
  Init_Countdown_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Countdown_SendGoal_Response_stamp accepted(::my_ros2_package::action::Countdown_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Countdown_SendGoal_Response_stamp(msg_);
  }

private:
  ::my_ros2_package::action::Countdown_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ros2_package::action::Countdown_SendGoal_Response>()
{
  return my_ros2_package::action::builder::Init_Countdown_SendGoal_Response_accepted();
}

}  // namespace my_ros2_package


namespace my_ros2_package
{

namespace action
{

namespace builder
{

class Init_Countdown_GetResult_Request_goal_id
{
public:
  Init_Countdown_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_ros2_package::action::Countdown_GetResult_Request goal_id(::my_ros2_package::action::Countdown_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ros2_package::action::Countdown_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ros2_package::action::Countdown_GetResult_Request>()
{
  return my_ros2_package::action::builder::Init_Countdown_GetResult_Request_goal_id();
}

}  // namespace my_ros2_package


namespace my_ros2_package
{

namespace action
{

namespace builder
{

class Init_Countdown_GetResult_Response_result
{
public:
  explicit Init_Countdown_GetResult_Response_result(::my_ros2_package::action::Countdown_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::my_ros2_package::action::Countdown_GetResult_Response result(::my_ros2_package::action::Countdown_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ros2_package::action::Countdown_GetResult_Response msg_;
};

class Init_Countdown_GetResult_Response_status
{
public:
  Init_Countdown_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Countdown_GetResult_Response_result status(::my_ros2_package::action::Countdown_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Countdown_GetResult_Response_result(msg_);
  }

private:
  ::my_ros2_package::action::Countdown_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ros2_package::action::Countdown_GetResult_Response>()
{
  return my_ros2_package::action::builder::Init_Countdown_GetResult_Response_status();
}

}  // namespace my_ros2_package


namespace my_ros2_package
{

namespace action
{

namespace builder
{

class Init_Countdown_FeedbackMessage_feedback
{
public:
  explicit Init_Countdown_FeedbackMessage_feedback(::my_ros2_package::action::Countdown_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::my_ros2_package::action::Countdown_FeedbackMessage feedback(::my_ros2_package::action::Countdown_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ros2_package::action::Countdown_FeedbackMessage msg_;
};

class Init_Countdown_FeedbackMessage_goal_id
{
public:
  Init_Countdown_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Countdown_FeedbackMessage_feedback goal_id(::my_ros2_package::action::Countdown_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Countdown_FeedbackMessage_feedback(msg_);
  }

private:
  ::my_ros2_package::action::Countdown_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ros2_package::action::Countdown_FeedbackMessage>()
{
  return my_ros2_package::action::builder::Init_Countdown_FeedbackMessage_goal_id();
}

}  // namespace my_ros2_package

#endif  // MY_ROS2_PACKAGE__ACTION__DETAIL__COUNTDOWN__BUILDER_HPP_
