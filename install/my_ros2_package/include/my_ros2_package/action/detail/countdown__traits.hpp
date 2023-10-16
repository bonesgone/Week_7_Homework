// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_ros2_package:action/Countdown.idl
// generated code does not contain a copyright notice

#ifndef MY_ROS2_PACKAGE__ACTION__DETAIL__COUNTDOWN__TRAITS_HPP_
#define MY_ROS2_PACKAGE__ACTION__DETAIL__COUNTDOWN__TRAITS_HPP_

#include "my_ros2_package/action/detail/countdown__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_ros2_package::action::Countdown_Goal>()
{
  return "my_ros2_package::action::Countdown_Goal";
}

template<>
inline const char * name<my_ros2_package::action::Countdown_Goal>()
{
  return "my_ros2_package/action/Countdown_Goal";
}

template<>
struct has_fixed_size<my_ros2_package::action::Countdown_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_ros2_package::action::Countdown_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_ros2_package::action::Countdown_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_ros2_package::action::Countdown_Result>()
{
  return "my_ros2_package::action::Countdown_Result";
}

template<>
inline const char * name<my_ros2_package::action::Countdown_Result>()
{
  return "my_ros2_package/action/Countdown_Result";
}

template<>
struct has_fixed_size<my_ros2_package::action::Countdown_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_ros2_package::action::Countdown_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_ros2_package::action::Countdown_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_ros2_package::action::Countdown_Feedback>()
{
  return "my_ros2_package::action::Countdown_Feedback";
}

template<>
inline const char * name<my_ros2_package::action::Countdown_Feedback>()
{
  return "my_ros2_package/action/Countdown_Feedback";
}

template<>
struct has_fixed_size<my_ros2_package::action::Countdown_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_ros2_package::action::Countdown_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_ros2_package::action::Countdown_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "my_ros2_package/action/detail/countdown__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_ros2_package::action::Countdown_SendGoal_Request>()
{
  return "my_ros2_package::action::Countdown_SendGoal_Request";
}

template<>
inline const char * name<my_ros2_package::action::Countdown_SendGoal_Request>()
{
  return "my_ros2_package/action/Countdown_SendGoal_Request";
}

template<>
struct has_fixed_size<my_ros2_package::action::Countdown_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<my_ros2_package::action::Countdown_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<my_ros2_package::action::Countdown_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<my_ros2_package::action::Countdown_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<my_ros2_package::action::Countdown_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_ros2_package::action::Countdown_SendGoal_Response>()
{
  return "my_ros2_package::action::Countdown_SendGoal_Response";
}

template<>
inline const char * name<my_ros2_package::action::Countdown_SendGoal_Response>()
{
  return "my_ros2_package/action/Countdown_SendGoal_Response";
}

template<>
struct has_fixed_size<my_ros2_package::action::Countdown_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<my_ros2_package::action::Countdown_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<my_ros2_package::action::Countdown_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_ros2_package::action::Countdown_SendGoal>()
{
  return "my_ros2_package::action::Countdown_SendGoal";
}

template<>
inline const char * name<my_ros2_package::action::Countdown_SendGoal>()
{
  return "my_ros2_package/action/Countdown_SendGoal";
}

template<>
struct has_fixed_size<my_ros2_package::action::Countdown_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<my_ros2_package::action::Countdown_SendGoal_Request>::value &&
    has_fixed_size<my_ros2_package::action::Countdown_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_ros2_package::action::Countdown_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<my_ros2_package::action::Countdown_SendGoal_Request>::value &&
    has_bounded_size<my_ros2_package::action::Countdown_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<my_ros2_package::action::Countdown_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<my_ros2_package::action::Countdown_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_ros2_package::action::Countdown_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_ros2_package::action::Countdown_GetResult_Request>()
{
  return "my_ros2_package::action::Countdown_GetResult_Request";
}

template<>
inline const char * name<my_ros2_package::action::Countdown_GetResult_Request>()
{
  return "my_ros2_package/action/Countdown_GetResult_Request";
}

template<>
struct has_fixed_size<my_ros2_package::action::Countdown_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<my_ros2_package::action::Countdown_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<my_ros2_package::action::Countdown_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "my_ros2_package/action/detail/countdown__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_ros2_package::action::Countdown_GetResult_Response>()
{
  return "my_ros2_package::action::Countdown_GetResult_Response";
}

template<>
inline const char * name<my_ros2_package::action::Countdown_GetResult_Response>()
{
  return "my_ros2_package/action/Countdown_GetResult_Response";
}

template<>
struct has_fixed_size<my_ros2_package::action::Countdown_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<my_ros2_package::action::Countdown_Result>::value> {};

template<>
struct has_bounded_size<my_ros2_package::action::Countdown_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<my_ros2_package::action::Countdown_Result>::value> {};

template<>
struct is_message<my_ros2_package::action::Countdown_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_ros2_package::action::Countdown_GetResult>()
{
  return "my_ros2_package::action::Countdown_GetResult";
}

template<>
inline const char * name<my_ros2_package::action::Countdown_GetResult>()
{
  return "my_ros2_package/action/Countdown_GetResult";
}

template<>
struct has_fixed_size<my_ros2_package::action::Countdown_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<my_ros2_package::action::Countdown_GetResult_Request>::value &&
    has_fixed_size<my_ros2_package::action::Countdown_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_ros2_package::action::Countdown_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<my_ros2_package::action::Countdown_GetResult_Request>::value &&
    has_bounded_size<my_ros2_package::action::Countdown_GetResult_Response>::value
  >
{
};

template<>
struct is_service<my_ros2_package::action::Countdown_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<my_ros2_package::action::Countdown_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_ros2_package::action::Countdown_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "my_ros2_package/action/detail/countdown__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_ros2_package::action::Countdown_FeedbackMessage>()
{
  return "my_ros2_package::action::Countdown_FeedbackMessage";
}

template<>
inline const char * name<my_ros2_package::action::Countdown_FeedbackMessage>()
{
  return "my_ros2_package/action/Countdown_FeedbackMessage";
}

template<>
struct has_fixed_size<my_ros2_package::action::Countdown_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<my_ros2_package::action::Countdown_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<my_ros2_package::action::Countdown_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<my_ros2_package::action::Countdown_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<my_ros2_package::action::Countdown_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<my_ros2_package::action::Countdown>
  : std::true_type
{
};

template<>
struct is_action_goal<my_ros2_package::action::Countdown_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<my_ros2_package::action::Countdown_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<my_ros2_package::action::Countdown_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MY_ROS2_PACKAGE__ACTION__DETAIL__COUNTDOWN__TRAITS_HPP_
