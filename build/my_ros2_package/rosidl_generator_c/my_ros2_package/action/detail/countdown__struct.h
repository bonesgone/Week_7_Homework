// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_ros2_package:action/Countdown.idl
// generated code does not contain a copyright notice

#ifndef MY_ROS2_PACKAGE__ACTION__DETAIL__COUNTDOWN__STRUCT_H_
#define MY_ROS2_PACKAGE__ACTION__DETAIL__COUNTDOWN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/Countdown in the package my_ros2_package.
typedef struct my_ros2_package__action__Countdown_Goal
{
  int32_t starting_num;
} my_ros2_package__action__Countdown_Goal;

// Struct for a sequence of my_ros2_package__action__Countdown_Goal.
typedef struct my_ros2_package__action__Countdown_Goal__Sequence
{
  my_ros2_package__action__Countdown_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ros2_package__action__Countdown_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/Countdown in the package my_ros2_package.
typedef struct my_ros2_package__action__Countdown_Result
{
  bool is_finished;
} my_ros2_package__action__Countdown_Result;

// Struct for a sequence of my_ros2_package__action__Countdown_Result.
typedef struct my_ros2_package__action__Countdown_Result__Sequence
{
  my_ros2_package__action__Countdown_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ros2_package__action__Countdown_Result__Sequence;


// Constants defined in the message

// Struct defined in action/Countdown in the package my_ros2_package.
typedef struct my_ros2_package__action__Countdown_Feedback
{
  int32_t current_num;
} my_ros2_package__action__Countdown_Feedback;

// Struct for a sequence of my_ros2_package__action__Countdown_Feedback.
typedef struct my_ros2_package__action__Countdown_Feedback__Sequence
{
  my_ros2_package__action__Countdown_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ros2_package__action__Countdown_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "my_ros2_package/action/detail/countdown__struct.h"

// Struct defined in action/Countdown in the package my_ros2_package.
typedef struct my_ros2_package__action__Countdown_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  my_ros2_package__action__Countdown_Goal goal;
} my_ros2_package__action__Countdown_SendGoal_Request;

// Struct for a sequence of my_ros2_package__action__Countdown_SendGoal_Request.
typedef struct my_ros2_package__action__Countdown_SendGoal_Request__Sequence
{
  my_ros2_package__action__Countdown_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ros2_package__action__Countdown_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/Countdown in the package my_ros2_package.
typedef struct my_ros2_package__action__Countdown_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} my_ros2_package__action__Countdown_SendGoal_Response;

// Struct for a sequence of my_ros2_package__action__Countdown_SendGoal_Response.
typedef struct my_ros2_package__action__Countdown_SendGoal_Response__Sequence
{
  my_ros2_package__action__Countdown_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ros2_package__action__Countdown_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/Countdown in the package my_ros2_package.
typedef struct my_ros2_package__action__Countdown_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} my_ros2_package__action__Countdown_GetResult_Request;

// Struct for a sequence of my_ros2_package__action__Countdown_GetResult_Request.
typedef struct my_ros2_package__action__Countdown_GetResult_Request__Sequence
{
  my_ros2_package__action__Countdown_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ros2_package__action__Countdown_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "my_ros2_package/action/detail/countdown__struct.h"

// Struct defined in action/Countdown in the package my_ros2_package.
typedef struct my_ros2_package__action__Countdown_GetResult_Response
{
  int8_t status;
  my_ros2_package__action__Countdown_Result result;
} my_ros2_package__action__Countdown_GetResult_Response;

// Struct for a sequence of my_ros2_package__action__Countdown_GetResult_Response.
typedef struct my_ros2_package__action__Countdown_GetResult_Response__Sequence
{
  my_ros2_package__action__Countdown_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ros2_package__action__Countdown_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "my_ros2_package/action/detail/countdown__struct.h"

// Struct defined in action/Countdown in the package my_ros2_package.
typedef struct my_ros2_package__action__Countdown_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  my_ros2_package__action__Countdown_Feedback feedback;
} my_ros2_package__action__Countdown_FeedbackMessage;

// Struct for a sequence of my_ros2_package__action__Countdown_FeedbackMessage.
typedef struct my_ros2_package__action__Countdown_FeedbackMessage__Sequence
{
  my_ros2_package__action__Countdown_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ros2_package__action__Countdown_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_ROS2_PACKAGE__ACTION__DETAIL__COUNTDOWN__STRUCT_H_
