// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfaces_demo:msg/DeviceId.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__DEVICE_ID__STRUCT_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__DEVICE_ID__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__msg__DeviceId __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__msg__DeviceId __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DeviceId_
{
  using Type = DeviceId_<ContainerAllocator>;

  explicit DeviceId_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_id = 0l;
    }
  }

  explicit DeviceId_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_id = 0l;
    }
  }

  // field types and members
  using _device_id_type =
    int32_t;
  _device_id_type device_id;

  // setters for named parameter idiom
  Type & set__device_id(
    const int32_t & _arg)
  {
    this->device_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::msg::DeviceId_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::msg::DeviceId_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::DeviceId_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::DeviceId_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::DeviceId_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::DeviceId_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::DeviceId_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::DeviceId_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::DeviceId_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::DeviceId_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__msg__DeviceId
    std::shared_ptr<base_interfaces_demo::msg::DeviceId_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__msg__DeviceId
    std::shared_ptr<base_interfaces_demo::msg::DeviceId_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeviceId_ & other) const
  {
    if (this->device_id != other.device_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeviceId_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeviceId_

// alias to use template instance with default allocator
using DeviceId =
  base_interfaces_demo::msg::DeviceId_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__DEVICE_ID__STRUCT_HPP_
