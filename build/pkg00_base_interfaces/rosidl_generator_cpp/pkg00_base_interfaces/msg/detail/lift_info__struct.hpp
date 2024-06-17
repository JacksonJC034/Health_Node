// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pkg00_base_interfaces:msg/LiftInfo.idl
// generated code does not contain a copyright notice

#ifndef PKG00_BASE_INTERFACES__MSG__DETAIL__LIFT_INFO__STRUCT_HPP_
#define PKG00_BASE_INTERFACES__MSG__DETAIL__LIFT_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__pkg00_base_interfaces__msg__LiftInfo __attribute__((deprecated))
#else
# define DEPRECATED__pkg00_base_interfaces__msg__LiftInfo __declspec(deprecated)
#endif

namespace pkg00_base_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LiftInfo_
{
  using Type = LiftInfo_<ContainerAllocator>;

  explicit LiftInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lift_location = 0l;
      this->lift_base_location = 0l;
    }
  }

  explicit LiftInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lift_location = 0l;
      this->lift_base_location = 0l;
    }
  }

  // field types and members
  using _lift_location_type =
    int32_t;
  _lift_location_type lift_location;
  using _lift_base_location_type =
    int32_t;
  _lift_base_location_type lift_base_location;

  // setters for named parameter idiom
  Type & set__lift_location(
    const int32_t & _arg)
  {
    this->lift_location = _arg;
    return *this;
  }
  Type & set__lift_base_location(
    const int32_t & _arg)
  {
    this->lift_base_location = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pkg00_base_interfaces::msg::LiftInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const pkg00_base_interfaces::msg::LiftInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pkg00_base_interfaces::msg::LiftInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pkg00_base_interfaces::msg::LiftInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pkg00_base_interfaces::msg::LiftInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pkg00_base_interfaces::msg::LiftInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pkg00_base_interfaces::msg::LiftInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pkg00_base_interfaces::msg::LiftInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pkg00_base_interfaces::msg::LiftInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pkg00_base_interfaces::msg::LiftInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pkg00_base_interfaces__msg__LiftInfo
    std::shared_ptr<pkg00_base_interfaces::msg::LiftInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pkg00_base_interfaces__msg__LiftInfo
    std::shared_ptr<pkg00_base_interfaces::msg::LiftInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LiftInfo_ & other) const
  {
    if (this->lift_location != other.lift_location) {
      return false;
    }
    if (this->lift_base_location != other.lift_base_location) {
      return false;
    }
    return true;
  }
  bool operator!=(const LiftInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LiftInfo_

// alias to use template instance with default allocator
using LiftInfo =
  pkg00_base_interfaces::msg::LiftInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pkg00_base_interfaces

#endif  // PKG00_BASE_INTERFACES__MSG__DETAIL__LIFT_INFO__STRUCT_HPP_
