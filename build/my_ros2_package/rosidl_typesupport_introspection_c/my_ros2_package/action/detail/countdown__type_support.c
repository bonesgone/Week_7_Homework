// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_ros2_package:action/Countdown.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_ros2_package/action/detail/countdown__rosidl_typesupport_introspection_c.h"
#include "my_ros2_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_ros2_package/action/detail/countdown__functions.h"
#include "my_ros2_package/action/detail/countdown__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Countdown_Goal__rosidl_typesupport_introspection_c__Countdown_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_ros2_package__action__Countdown_Goal__init(message_memory);
}

void Countdown_Goal__rosidl_typesupport_introspection_c__Countdown_Goal_fini_function(void * message_memory)
{
  my_ros2_package__action__Countdown_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Countdown_Goal__rosidl_typesupport_introspection_c__Countdown_Goal_message_member_array[1] = {
  {
    "starting_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_ros2_package__action__Countdown_Goal, starting_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Countdown_Goal__rosidl_typesupport_introspection_c__Countdown_Goal_message_members = {
  "my_ros2_package__action",  // message namespace
  "Countdown_Goal",  // message name
  1,  // number of fields
  sizeof(my_ros2_package__action__Countdown_Goal),
  Countdown_Goal__rosidl_typesupport_introspection_c__Countdown_Goal_message_member_array,  // message members
  Countdown_Goal__rosidl_typesupport_introspection_c__Countdown_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  Countdown_Goal__rosidl_typesupport_introspection_c__Countdown_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Countdown_Goal__rosidl_typesupport_introspection_c__Countdown_Goal_message_type_support_handle = {
  0,
  &Countdown_Goal__rosidl_typesupport_introspection_c__Countdown_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_ros2_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_ros2_package, action, Countdown_Goal)() {
  if (!Countdown_Goal__rosidl_typesupport_introspection_c__Countdown_Goal_message_type_support_handle.typesupport_identifier) {
    Countdown_Goal__rosidl_typesupport_introspection_c__Countdown_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Countdown_Goal__rosidl_typesupport_introspection_c__Countdown_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_ros2_package/action/detail/countdown__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_ros2_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_ros2_package/action/detail/countdown__functions.h"
// already included above
// #include "my_ros2_package/action/detail/countdown__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Countdown_Result__rosidl_typesupport_introspection_c__Countdown_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_ros2_package__action__Countdown_Result__init(message_memory);
}

void Countdown_Result__rosidl_typesupport_introspection_c__Countdown_Result_fini_function(void * message_memory)
{
  my_ros2_package__action__Countdown_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Countdown_Result__rosidl_typesupport_introspection_c__Countdown_Result_message_member_array[1] = {
  {
    "is_finished",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_ros2_package__action__Countdown_Result, is_finished),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Countdown_Result__rosidl_typesupport_introspection_c__Countdown_Result_message_members = {
  "my_ros2_package__action",  // message namespace
  "Countdown_Result",  // message name
  1,  // number of fields
  sizeof(my_ros2_package__action__Countdown_Result),
  Countdown_Result__rosidl_typesupport_introspection_c__Countdown_Result_message_member_array,  // message members
  Countdown_Result__rosidl_typesupport_introspection_c__Countdown_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  Countdown_Result__rosidl_typesupport_introspection_c__Countdown_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Countdown_Result__rosidl_typesupport_introspection_c__Countdown_Result_message_type_support_handle = {
  0,
  &Countdown_Result__rosidl_typesupport_introspection_c__Countdown_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_ros2_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_ros2_package, action, Countdown_Result)() {
  if (!Countdown_Result__rosidl_typesupport_introspection_c__Countdown_Result_message_type_support_handle.typesupport_identifier) {
    Countdown_Result__rosidl_typesupport_introspection_c__Countdown_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Countdown_Result__rosidl_typesupport_introspection_c__Countdown_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_ros2_package/action/detail/countdown__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_ros2_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_ros2_package/action/detail/countdown__functions.h"
// already included above
// #include "my_ros2_package/action/detail/countdown__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Countdown_Feedback__rosidl_typesupport_introspection_c__Countdown_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_ros2_package__action__Countdown_Feedback__init(message_memory);
}

void Countdown_Feedback__rosidl_typesupport_introspection_c__Countdown_Feedback_fini_function(void * message_memory)
{
  my_ros2_package__action__Countdown_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Countdown_Feedback__rosidl_typesupport_introspection_c__Countdown_Feedback_message_member_array[1] = {
  {
    "current_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_ros2_package__action__Countdown_Feedback, current_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Countdown_Feedback__rosidl_typesupport_introspection_c__Countdown_Feedback_message_members = {
  "my_ros2_package__action",  // message namespace
  "Countdown_Feedback",  // message name
  1,  // number of fields
  sizeof(my_ros2_package__action__Countdown_Feedback),
  Countdown_Feedback__rosidl_typesupport_introspection_c__Countdown_Feedback_message_member_array,  // message members
  Countdown_Feedback__rosidl_typesupport_introspection_c__Countdown_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  Countdown_Feedback__rosidl_typesupport_introspection_c__Countdown_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Countdown_Feedback__rosidl_typesupport_introspection_c__Countdown_Feedback_message_type_support_handle = {
  0,
  &Countdown_Feedback__rosidl_typesupport_introspection_c__Countdown_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_ros2_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_ros2_package, action, Countdown_Feedback)() {
  if (!Countdown_Feedback__rosidl_typesupport_introspection_c__Countdown_Feedback_message_type_support_handle.typesupport_identifier) {
    Countdown_Feedback__rosidl_typesupport_introspection_c__Countdown_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Countdown_Feedback__rosidl_typesupport_introspection_c__Countdown_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_ros2_package/action/detail/countdown__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_ros2_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_ros2_package/action/detail/countdown__functions.h"
// already included above
// #include "my_ros2_package/action/detail/countdown__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "my_ros2_package/action/countdown.h"
// Member `goal`
// already included above
// #include "my_ros2_package/action/detail/countdown__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Countdown_SendGoal_Request__rosidl_typesupport_introspection_c__Countdown_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_ros2_package__action__Countdown_SendGoal_Request__init(message_memory);
}

void Countdown_SendGoal_Request__rosidl_typesupport_introspection_c__Countdown_SendGoal_Request_fini_function(void * message_memory)
{
  my_ros2_package__action__Countdown_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Countdown_SendGoal_Request__rosidl_typesupport_introspection_c__Countdown_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_ros2_package__action__Countdown_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_ros2_package__action__Countdown_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Countdown_SendGoal_Request__rosidl_typesupport_introspection_c__Countdown_SendGoal_Request_message_members = {
  "my_ros2_package__action",  // message namespace
  "Countdown_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(my_ros2_package__action__Countdown_SendGoal_Request),
  Countdown_SendGoal_Request__rosidl_typesupport_introspection_c__Countdown_SendGoal_Request_message_member_array,  // message members
  Countdown_SendGoal_Request__rosidl_typesupport_introspection_c__Countdown_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Countdown_SendGoal_Request__rosidl_typesupport_introspection_c__Countdown_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Countdown_SendGoal_Request__rosidl_typesupport_introspection_c__Countdown_SendGoal_Request_message_type_support_handle = {
  0,
  &Countdown_SendGoal_Request__rosidl_typesupport_introspection_c__Countdown_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_ros2_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_ros2_package, action, Countdown_SendGoal_Request)() {
  Countdown_SendGoal_Request__rosidl_typesupport_introspection_c__Countdown_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Countdown_SendGoal_Request__rosidl_typesupport_introspection_c__Countdown_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_ros2_package, action, Countdown_Goal)();
  if (!Countdown_SendGoal_Request__rosidl_typesupport_introspection_c__Countdown_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    Countdown_SendGoal_Request__rosidl_typesupport_introspection_c__Countdown_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Countdown_SendGoal_Request__rosidl_typesupport_introspection_c__Countdown_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_ros2_package/action/detail/countdown__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_ros2_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_ros2_package/action/detail/countdown__functions.h"
// already included above
// #include "my_ros2_package/action/detail/countdown__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Countdown_SendGoal_Response__rosidl_typesupport_introspection_c__Countdown_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_ros2_package__action__Countdown_SendGoal_Response__init(message_memory);
}

void Countdown_SendGoal_Response__rosidl_typesupport_introspection_c__Countdown_SendGoal_Response_fini_function(void * message_memory)
{
  my_ros2_package__action__Countdown_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Countdown_SendGoal_Response__rosidl_typesupport_introspection_c__Countdown_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_ros2_package__action__Countdown_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_ros2_package__action__Countdown_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Countdown_SendGoal_Response__rosidl_typesupport_introspection_c__Countdown_SendGoal_Response_message_members = {
  "my_ros2_package__action",  // message namespace
  "Countdown_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(my_ros2_package__action__Countdown_SendGoal_Response),
  Countdown_SendGoal_Response__rosidl_typesupport_introspection_c__Countdown_SendGoal_Response_message_member_array,  // message members
  Countdown_SendGoal_Response__rosidl_typesupport_introspection_c__Countdown_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Countdown_SendGoal_Response__rosidl_typesupport_introspection_c__Countdown_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Countdown_SendGoal_Response__rosidl_typesupport_introspection_c__Countdown_SendGoal_Response_message_type_support_handle = {
  0,
  &Countdown_SendGoal_Response__rosidl_typesupport_introspection_c__Countdown_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_ros2_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_ros2_package, action, Countdown_SendGoal_Response)() {
  Countdown_SendGoal_Response__rosidl_typesupport_introspection_c__Countdown_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!Countdown_SendGoal_Response__rosidl_typesupport_introspection_c__Countdown_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    Countdown_SendGoal_Response__rosidl_typesupport_introspection_c__Countdown_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Countdown_SendGoal_Response__rosidl_typesupport_introspection_c__Countdown_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_ros2_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "my_ros2_package/action/detail/countdown__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers my_ros2_package__action__detail__countdown__rosidl_typesupport_introspection_c__Countdown_SendGoal_service_members = {
  "my_ros2_package__action",  // service namespace
  "Countdown_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // my_ros2_package__action__detail__countdown__rosidl_typesupport_introspection_c__Countdown_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // my_ros2_package__action__detail__countdown__rosidl_typesupport_introspection_c__Countdown_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t my_ros2_package__action__detail__countdown__rosidl_typesupport_introspection_c__Countdown_SendGoal_service_type_support_handle = {
  0,
  &my_ros2_package__action__detail__countdown__rosidl_typesupport_introspection_c__Countdown_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_ros2_package, action, Countdown_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_ros2_package, action, Countdown_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_ros2_package
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_ros2_package, action, Countdown_SendGoal)() {
  if (!my_ros2_package__action__detail__countdown__rosidl_typesupport_introspection_c__Countdown_SendGoal_service_type_support_handle.typesupport_identifier) {
    my_ros2_package__action__detail__countdown__rosidl_typesupport_introspection_c__Countdown_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)my_ros2_package__action__detail__countdown__rosidl_typesupport_introspection_c__Countdown_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_ros2_package, action, Countdown_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_ros2_package, action, Countdown_SendGoal_Response)()->data;
  }

  return &my_ros2_package__action__detail__countdown__rosidl_typesupport_introspection_c__Countdown_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "my_ros2_package/action/detail/countdown__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_ros2_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_ros2_package/action/detail/countdown__functions.h"
// already included above
// #include "my_ros2_package/action/detail/countdown__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Countdown_GetResult_Request__rosidl_typesupport_introspection_c__Countdown_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_ros2_package__action__Countdown_GetResult_Request__init(message_memory);
}

void Countdown_GetResult_Request__rosidl_typesupport_introspection_c__Countdown_GetResult_Request_fini_function(void * message_memory)
{
  my_ros2_package__action__Countdown_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Countdown_GetResult_Request__rosidl_typesupport_introspection_c__Countdown_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_ros2_package__action__Countdown_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Countdown_GetResult_Request__rosidl_typesupport_introspection_c__Countdown_GetResult_Request_message_members = {
  "my_ros2_package__action",  // message namespace
  "Countdown_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(my_ros2_package__action__Countdown_GetResult_Request),
  Countdown_GetResult_Request__rosidl_typesupport_introspection_c__Countdown_GetResult_Request_message_member_array,  // message members
  Countdown_GetResult_Request__rosidl_typesupport_introspection_c__Countdown_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Countdown_GetResult_Request__rosidl_typesupport_introspection_c__Countdown_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Countdown_GetResult_Request__rosidl_typesupport_introspection_c__Countdown_GetResult_Request_message_type_support_handle = {
  0,
  &Countdown_GetResult_Request__rosidl_typesupport_introspection_c__Countdown_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_ros2_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_ros2_package, action, Countdown_GetResult_Request)() {
  Countdown_GetResult_Request__rosidl_typesupport_introspection_c__Countdown_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!Countdown_GetResult_Request__rosidl_typesupport_introspection_c__Countdown_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    Countdown_GetResult_Request__rosidl_typesupport_introspection_c__Countdown_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Countdown_GetResult_Request__rosidl_typesupport_introspection_c__Countdown_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_ros2_package/action/detail/countdown__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_ros2_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_ros2_package/action/detail/countdown__functions.h"
// already included above
// #include "my_ros2_package/action/detail/countdown__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "my_ros2_package/action/countdown.h"
// Member `result`
// already included above
// #include "my_ros2_package/action/detail/countdown__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Countdown_GetResult_Response__rosidl_typesupport_introspection_c__Countdown_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_ros2_package__action__Countdown_GetResult_Response__init(message_memory);
}

void Countdown_GetResult_Response__rosidl_typesupport_introspection_c__Countdown_GetResult_Response_fini_function(void * message_memory)
{
  my_ros2_package__action__Countdown_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Countdown_GetResult_Response__rosidl_typesupport_introspection_c__Countdown_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_ros2_package__action__Countdown_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_ros2_package__action__Countdown_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Countdown_GetResult_Response__rosidl_typesupport_introspection_c__Countdown_GetResult_Response_message_members = {
  "my_ros2_package__action",  // message namespace
  "Countdown_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(my_ros2_package__action__Countdown_GetResult_Response),
  Countdown_GetResult_Response__rosidl_typesupport_introspection_c__Countdown_GetResult_Response_message_member_array,  // message members
  Countdown_GetResult_Response__rosidl_typesupport_introspection_c__Countdown_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Countdown_GetResult_Response__rosidl_typesupport_introspection_c__Countdown_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Countdown_GetResult_Response__rosidl_typesupport_introspection_c__Countdown_GetResult_Response_message_type_support_handle = {
  0,
  &Countdown_GetResult_Response__rosidl_typesupport_introspection_c__Countdown_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_ros2_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_ros2_package, action, Countdown_GetResult_Response)() {
  Countdown_GetResult_Response__rosidl_typesupport_introspection_c__Countdown_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_ros2_package, action, Countdown_Result)();
  if (!Countdown_GetResult_Response__rosidl_typesupport_introspection_c__Countdown_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    Countdown_GetResult_Response__rosidl_typesupport_introspection_c__Countdown_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Countdown_GetResult_Response__rosidl_typesupport_introspection_c__Countdown_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_ros2_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "my_ros2_package/action/detail/countdown__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers my_ros2_package__action__detail__countdown__rosidl_typesupport_introspection_c__Countdown_GetResult_service_members = {
  "my_ros2_package__action",  // service namespace
  "Countdown_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // my_ros2_package__action__detail__countdown__rosidl_typesupport_introspection_c__Countdown_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // my_ros2_package__action__detail__countdown__rosidl_typesupport_introspection_c__Countdown_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t my_ros2_package__action__detail__countdown__rosidl_typesupport_introspection_c__Countdown_GetResult_service_type_support_handle = {
  0,
  &my_ros2_package__action__detail__countdown__rosidl_typesupport_introspection_c__Countdown_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_ros2_package, action, Countdown_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_ros2_package, action, Countdown_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_ros2_package
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_ros2_package, action, Countdown_GetResult)() {
  if (!my_ros2_package__action__detail__countdown__rosidl_typesupport_introspection_c__Countdown_GetResult_service_type_support_handle.typesupport_identifier) {
    my_ros2_package__action__detail__countdown__rosidl_typesupport_introspection_c__Countdown_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)my_ros2_package__action__detail__countdown__rosidl_typesupport_introspection_c__Countdown_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_ros2_package, action, Countdown_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_ros2_package, action, Countdown_GetResult_Response)()->data;
  }

  return &my_ros2_package__action__detail__countdown__rosidl_typesupport_introspection_c__Countdown_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "my_ros2_package/action/detail/countdown__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_ros2_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_ros2_package/action/detail/countdown__functions.h"
// already included above
// #include "my_ros2_package/action/detail/countdown__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "my_ros2_package/action/countdown.h"
// Member `feedback`
// already included above
// #include "my_ros2_package/action/detail/countdown__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Countdown_FeedbackMessage__rosidl_typesupport_introspection_c__Countdown_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_ros2_package__action__Countdown_FeedbackMessage__init(message_memory);
}

void Countdown_FeedbackMessage__rosidl_typesupport_introspection_c__Countdown_FeedbackMessage_fini_function(void * message_memory)
{
  my_ros2_package__action__Countdown_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Countdown_FeedbackMessage__rosidl_typesupport_introspection_c__Countdown_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_ros2_package__action__Countdown_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_ros2_package__action__Countdown_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Countdown_FeedbackMessage__rosidl_typesupport_introspection_c__Countdown_FeedbackMessage_message_members = {
  "my_ros2_package__action",  // message namespace
  "Countdown_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(my_ros2_package__action__Countdown_FeedbackMessage),
  Countdown_FeedbackMessage__rosidl_typesupport_introspection_c__Countdown_FeedbackMessage_message_member_array,  // message members
  Countdown_FeedbackMessage__rosidl_typesupport_introspection_c__Countdown_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  Countdown_FeedbackMessage__rosidl_typesupport_introspection_c__Countdown_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Countdown_FeedbackMessage__rosidl_typesupport_introspection_c__Countdown_FeedbackMessage_message_type_support_handle = {
  0,
  &Countdown_FeedbackMessage__rosidl_typesupport_introspection_c__Countdown_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_ros2_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_ros2_package, action, Countdown_FeedbackMessage)() {
  Countdown_FeedbackMessage__rosidl_typesupport_introspection_c__Countdown_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Countdown_FeedbackMessage__rosidl_typesupport_introspection_c__Countdown_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_ros2_package, action, Countdown_Feedback)();
  if (!Countdown_FeedbackMessage__rosidl_typesupport_introspection_c__Countdown_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    Countdown_FeedbackMessage__rosidl_typesupport_introspection_c__Countdown_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Countdown_FeedbackMessage__rosidl_typesupport_introspection_c__Countdown_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
