// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pkg00_base_interfaces:msg/ObsLaser.idl
// generated code does not contain a copyright notice

#ifndef PKG00_BASE_INTERFACES__MSG__DETAIL__OBS_LASER__STRUCT_HPP_
#define PKG00_BASE_INTERFACES__MSG__DETAIL__OBS_LASER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__pkg00_base_interfaces__msg__ObsLaser __attribute__((deprecated))
#else
# define DEPRECATED__pkg00_base_interfaces__msg__ObsLaser __declspec(deprecated)
#endif

namespace pkg00_base_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObsLaser_
{
  using Type = ObsLaser_<ContainerAllocator>;

  explicit ObsLaser_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_id = 0l;
      this->subpeak_quality = 0l;
      this->temp_code = 0l;
      this->subpeak_strength = 0l;
      this->mainpeak = 0l;
      this->mainpeak_correct = 0l;
      this->mainpeak_strength = 0l;
      this->sunlight_base = 0l;
    }
  }

  explicit ObsLaser_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_id = 0l;
      this->subpeak_quality = 0l;
      this->temp_code = 0l;
      this->subpeak_strength = 0l;
      this->mainpeak = 0l;
      this->mainpeak_correct = 0l;
      this->mainpeak_strength = 0l;
      this->sunlight_base = 0l;
    }
  }

  // field types and members
  using _device_id_type =
    int32_t;
  _device_id_type device_id;
  using _subpeak_quality_type =
    int32_t;
  _subpeak_quality_type subpeak_quality;
  using _temp_code_type =
    int32_t;
  _temp_code_type temp_code;
  using _subpeak_strength_type =
    int32_t;
  _subpeak_strength_type subpeak_strength;
  using _mainpeak_type =
    int32_t;
  _mainpeak_type mainpeak;
  using _mainpeak_correct_type =
    int32_t;
  _mainpeak_correct_type mainpeak_correct;
  using _mainpeak_strength_type =
    int32_t;
  _mainpeak_strength_type mainpeak_strength;
  using _sunlight_base_type =
    int32_t;
  _sunlight_base_type sunlight_base;

  // setters for named parameter idiom
  Type & set__device_id(
    const int32_t & _arg)
  {
    this->device_id = _arg;
    return *this;
  }
  Type & set__subpeak_quality(
    const int32_t & _arg)
  {
    this->subpeak_quality = _arg;
    return *this;
  }
  Type & set__temp_code(
    const int32_t & _arg)
  {
    this->temp_code = _arg;
    return *this;
  }
  Type & set__subpeak_strength(
    const int32_t & _arg)
  {
    this->subpeak_strength = _arg;
    return *this;
  }
  Type & set__mainpeak(
    const int32_t & _arg)
  {
    this->mainpeak = _arg;
    return *this;
  }
  Type & set__mainpeak_correct(
    const int32_t & _arg)
  {
    this->mainpeak_correct = _arg;
    return *this;
  }
  Type & set__mainpeak_strength(
    const int32_t & _arg)
  {
    this->mainpeak_strength = _arg;
    return *this;
  }
  Type & set__sunlight_base(
    const int32_t & _arg)
  {
    this->sunlight_base = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pkg00_base_interfaces::msg::ObsLaser_<ContainerAllocator> *;
  using ConstRawPtr =
    const pkg00_base_interfaces::msg::ObsLaser_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pkg00_base_interfaces::msg::ObsLaser_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pkg00_base_interfaces::msg::ObsLaser_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pkg00_base_interfaces::msg::ObsLaser_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pkg00_base_interfaces::msg::ObsLaser_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pkg00_base_interfaces::msg::ObsLaser_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pkg00_base_interfaces::msg::ObsLaser_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pkg00_base_interfaces::msg::ObsLaser_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pkg00_base_interfaces::msg::ObsLaser_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pkg00_base_interfaces__msg__ObsLaser
    std::shared_ptr<pkg00_base_interfaces::msg::ObsLaser_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pkg00_base_interfaces__msg__ObsLaser
    std::shared_ptr<pkg00_base_interfaces::msg::ObsLaser_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObsLaser_ & other) const
  {
    if (this->device_id != other.device_id) {
      return false;
    }
    if (this->subpeak_quality != other.subpeak_quality) {
      return false;
    }
    if (this->temp_code != other.temp_code) {
      return false;
    }
    if (this->subpeak_strength != other.subpeak_strength) {
      return false;
    }
    if (this->mainpeak != other.mainpeak) {
      return false;
    }
    if (this->mainpeak_correct != other.mainpeak_correct) {
      return false;
    }
    if (this->mainpeak_strength != other.mainpeak_strength) {
      return false;
    }
    if (this->sunlight_base != other.sunlight_base) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObsLaser_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObsLaser_

// alias to use template instance with default allocator
using ObsLaser =
  pkg00_base_interfaces::msg::ObsLaser_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pkg00_base_interfaces

#endif  // PKG00_BASE_INTERFACES__MSG__DETAIL__OBS_LASER__STRUCT_HPP_
