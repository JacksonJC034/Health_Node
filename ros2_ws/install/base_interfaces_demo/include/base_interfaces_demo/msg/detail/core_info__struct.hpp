// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfaces_demo:msg/CoreInfo.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__CORE_INFO__STRUCT_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__CORE_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__msg__CoreInfo __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__msg__CoreInfo __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CoreInfo_
{
  using Type = CoreInfo_<ContainerAllocator>;

  explicit CoreInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cpu_usage = 0.0;
      this->memory_usage = 0.0;
      this->disk_usage = 0.0;
      this->cpu_frequency = 0.0;
      this->nic_status = "";
      this->temperature = 0.0;
    }
  }

  explicit CoreInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : nic_status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cpu_usage = 0.0;
      this->memory_usage = 0.0;
      this->disk_usage = 0.0;
      this->cpu_frequency = 0.0;
      this->nic_status = "";
      this->temperature = 0.0;
    }
  }

  // field types and members
  using _cpu_usage_type =
    double;
  _cpu_usage_type cpu_usage;
  using _memory_usage_type =
    double;
  _memory_usage_type memory_usage;
  using _disk_usage_type =
    double;
  _disk_usage_type disk_usage;
  using _cpu_frequency_type =
    double;
  _cpu_frequency_type cpu_frequency;
  using _nic_status_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _nic_status_type nic_status;
  using _temperature_type =
    double;
  _temperature_type temperature;

  // setters for named parameter idiom
  Type & set__cpu_usage(
    const double & _arg)
  {
    this->cpu_usage = _arg;
    return *this;
  }
  Type & set__memory_usage(
    const double & _arg)
  {
    this->memory_usage = _arg;
    return *this;
  }
  Type & set__disk_usage(
    const double & _arg)
  {
    this->disk_usage = _arg;
    return *this;
  }
  Type & set__cpu_frequency(
    const double & _arg)
  {
    this->cpu_frequency = _arg;
    return *this;
  }
  Type & set__nic_status(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->nic_status = _arg;
    return *this;
  }
  Type & set__temperature(
    const double & _arg)
  {
    this->temperature = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::msg::CoreInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::msg::CoreInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::CoreInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::CoreInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::CoreInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::CoreInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::CoreInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::CoreInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::CoreInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::CoreInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__msg__CoreInfo
    std::shared_ptr<base_interfaces_demo::msg::CoreInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__msg__CoreInfo
    std::shared_ptr<base_interfaces_demo::msg::CoreInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CoreInfo_ & other) const
  {
    if (this->cpu_usage != other.cpu_usage) {
      return false;
    }
    if (this->memory_usage != other.memory_usage) {
      return false;
    }
    if (this->disk_usage != other.disk_usage) {
      return false;
    }
    if (this->cpu_frequency != other.cpu_frequency) {
      return false;
    }
    if (this->nic_status != other.nic_status) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    return true;
  }
  bool operator!=(const CoreInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CoreInfo_

// alias to use template instance with default allocator
using CoreInfo =
  base_interfaces_demo::msg::CoreInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__CORE_INFO__STRUCT_HPP_
