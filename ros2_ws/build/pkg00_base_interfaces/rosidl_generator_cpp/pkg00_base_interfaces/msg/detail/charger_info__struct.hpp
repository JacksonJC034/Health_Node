// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pkg00_base_interfaces:msg/ChargerInfo.idl
// generated code does not contain a copyright notice

#ifndef PKG00_BASE_INTERFACES__MSG__DETAIL__CHARGER_INFO__STRUCT_HPP_
#define PKG00_BASE_INTERFACES__MSG__DETAIL__CHARGER_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__pkg00_base_interfaces__msg__ChargerInfo __attribute__((deprecated))
#else
# define DEPRECATED__pkg00_base_interfaces__msg__ChargerInfo __declspec(deprecated)
#endif

namespace pkg00_base_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ChargerInfo_
{
  using Type = ChargerInfo_<ContainerAllocator>;

  explicit ChargerInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->charger_status = 0l;
      this->status = 0l;
      this->error_code = 0ll;
    }
  }

  explicit ChargerInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->charger_status = 0l;
      this->status = 0l;
      this->error_code = 0ll;
    }
  }

  // field types and members
  using _charger_status_type =
    int32_t;
  _charger_status_type charger_status;
  using _status_type =
    int32_t;
  _status_type status;
  using _error_code_type =
    int64_t;
  _error_code_type error_code;

  // setters for named parameter idiom
  Type & set__charger_status(
    const int32_t & _arg)
  {
    this->charger_status = _arg;
    return *this;
  }
  Type & set__status(
    const int32_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__error_code(
    const int64_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pkg00_base_interfaces::msg::ChargerInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const pkg00_base_interfaces::msg::ChargerInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pkg00_base_interfaces::msg::ChargerInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pkg00_base_interfaces::msg::ChargerInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pkg00_base_interfaces::msg::ChargerInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pkg00_base_interfaces::msg::ChargerInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pkg00_base_interfaces::msg::ChargerInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pkg00_base_interfaces::msg::ChargerInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pkg00_base_interfaces::msg::ChargerInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pkg00_base_interfaces::msg::ChargerInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pkg00_base_interfaces__msg__ChargerInfo
    std::shared_ptr<pkg00_base_interfaces::msg::ChargerInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pkg00_base_interfaces__msg__ChargerInfo
    std::shared_ptr<pkg00_base_interfaces::msg::ChargerInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargerInfo_ & other) const
  {
    if (this->charger_status != other.charger_status) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChargerInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargerInfo_

// alias to use template instance with default allocator
using ChargerInfo =
  pkg00_base_interfaces::msg::ChargerInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pkg00_base_interfaces

#endif  // PKG00_BASE_INTERFACES__MSG__DETAIL__CHARGER_INFO__STRUCT_HPP_
