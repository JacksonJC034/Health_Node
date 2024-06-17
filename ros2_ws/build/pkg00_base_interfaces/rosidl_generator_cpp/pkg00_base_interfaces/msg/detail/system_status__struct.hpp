// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pkg00_base_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice

#ifndef PKG00_BASE_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__STRUCT_HPP_
#define PKG00_BASE_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__pkg00_base_interfaces__msg__SystemStatus __attribute__((deprecated))
#else
# define DEPRECATED__pkg00_base_interfaces__msg__SystemStatus __declspec(deprecated)
#endif

namespace pkg00_base_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SystemStatus_
{
  using Type = SystemStatus_<ContainerAllocator>;

  explicit SystemStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->system_mode = 0l;
      this->work_status = 0l;
    }
  }

  explicit SystemStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->system_mode = 0l;
      this->work_status = 0l;
    }
  }

  // field types and members
  using _system_mode_type =
    int32_t;
  _system_mode_type system_mode;
  using _work_status_type =
    int32_t;
  _work_status_type work_status;

  // setters for named parameter idiom
  Type & set__system_mode(
    const int32_t & _arg)
  {
    this->system_mode = _arg;
    return *this;
  }
  Type & set__work_status(
    const int32_t & _arg)
  {
    this->work_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pkg00_base_interfaces::msg::SystemStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const pkg00_base_interfaces::msg::SystemStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pkg00_base_interfaces::msg::SystemStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pkg00_base_interfaces::msg::SystemStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pkg00_base_interfaces::msg::SystemStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pkg00_base_interfaces::msg::SystemStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pkg00_base_interfaces::msg::SystemStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pkg00_base_interfaces::msg::SystemStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pkg00_base_interfaces::msg::SystemStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pkg00_base_interfaces::msg::SystemStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pkg00_base_interfaces__msg__SystemStatus
    std::shared_ptr<pkg00_base_interfaces::msg::SystemStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pkg00_base_interfaces__msg__SystemStatus
    std::shared_ptr<pkg00_base_interfaces::msg::SystemStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SystemStatus_ & other) const
  {
    if (this->system_mode != other.system_mode) {
      return false;
    }
    if (this->work_status != other.work_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SystemStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SystemStatus_

// alias to use template instance with default allocator
using SystemStatus =
  pkg00_base_interfaces::msg::SystemStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pkg00_base_interfaces

#endif  // PKG00_BASE_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__STRUCT_HPP_
