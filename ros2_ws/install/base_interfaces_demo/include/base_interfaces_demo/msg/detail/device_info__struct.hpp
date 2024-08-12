// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfaces_demo:msg/DeviceInfo.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__DEVICE_INFO__STRUCT_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__DEVICE_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__msg__DeviceInfo __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__msg__DeviceInfo __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DeviceInfo_
{
  using Type = DeviceInfo_<ContainerAllocator>;

  explicit DeviceInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cpu_used = 0.0;
      this->cpu0_used = 0.0;
      this->cpu1_used = 0.0;
      this->cpu2_used = 0.0;
      this->cpu3_used = 0.0;
      this->disk_used = "";
      this->mem_used = 0.0;
      this->ghz = 0.0;
      this->network_status = 0l;
    }
  }

  explicit DeviceInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : disk_used(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cpu_used = 0.0;
      this->cpu0_used = 0.0;
      this->cpu1_used = 0.0;
      this->cpu2_used = 0.0;
      this->cpu3_used = 0.0;
      this->disk_used = "";
      this->mem_used = 0.0;
      this->ghz = 0.0;
      this->network_status = 0l;
    }
  }

  // field types and members
  using _cpu_used_type =
    double;
  _cpu_used_type cpu_used;
  using _cpu0_used_type =
    double;
  _cpu0_used_type cpu0_used;
  using _cpu1_used_type =
    double;
  _cpu1_used_type cpu1_used;
  using _cpu2_used_type =
    double;
  _cpu2_used_type cpu2_used;
  using _cpu3_used_type =
    double;
  _cpu3_used_type cpu3_used;
  using _disk_used_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _disk_used_type disk_used;
  using _mem_used_type =
    double;
  _mem_used_type mem_used;
  using _ghz_type =
    double;
  _ghz_type ghz;
  using _network_status_type =
    int32_t;
  _network_status_type network_status;

  // setters for named parameter idiom
  Type & set__cpu_used(
    const double & _arg)
  {
    this->cpu_used = _arg;
    return *this;
  }
  Type & set__cpu0_used(
    const double & _arg)
  {
    this->cpu0_used = _arg;
    return *this;
  }
  Type & set__cpu1_used(
    const double & _arg)
  {
    this->cpu1_used = _arg;
    return *this;
  }
  Type & set__cpu2_used(
    const double & _arg)
  {
    this->cpu2_used = _arg;
    return *this;
  }
  Type & set__cpu3_used(
    const double & _arg)
  {
    this->cpu3_used = _arg;
    return *this;
  }
  Type & set__disk_used(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->disk_used = _arg;
    return *this;
  }
  Type & set__mem_used(
    const double & _arg)
  {
    this->mem_used = _arg;
    return *this;
  }
  Type & set__ghz(
    const double & _arg)
  {
    this->ghz = _arg;
    return *this;
  }
  Type & set__network_status(
    const int32_t & _arg)
  {
    this->network_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::msg::DeviceInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::msg::DeviceInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::DeviceInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::DeviceInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::DeviceInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::DeviceInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::DeviceInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::DeviceInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::DeviceInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::DeviceInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__msg__DeviceInfo
    std::shared_ptr<base_interfaces_demo::msg::DeviceInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__msg__DeviceInfo
    std::shared_ptr<base_interfaces_demo::msg::DeviceInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeviceInfo_ & other) const
  {
    if (this->cpu_used != other.cpu_used) {
      return false;
    }
    if (this->cpu0_used != other.cpu0_used) {
      return false;
    }
    if (this->cpu1_used != other.cpu1_used) {
      return false;
    }
    if (this->cpu2_used != other.cpu2_used) {
      return false;
    }
    if (this->cpu3_used != other.cpu3_used) {
      return false;
    }
    if (this->disk_used != other.disk_used) {
      return false;
    }
    if (this->mem_used != other.mem_used) {
      return false;
    }
    if (this->ghz != other.ghz) {
      return false;
    }
    if (this->network_status != other.network_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeviceInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeviceInfo_

// alias to use template instance with default allocator
using DeviceInfo =
  base_interfaces_demo::msg::DeviceInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__DEVICE_INFO__STRUCT_HPP_
