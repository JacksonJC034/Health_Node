// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pkg00_base_interfaces:msg/BmsInfo.idl
// generated code does not contain a copyright notice

#ifndef PKG00_BASE_INTERFACES__MSG__DETAIL__BMS_INFO__BUILDER_HPP_
#define PKG00_BASE_INTERFACES__MSG__DETAIL__BMS_INFO__BUILDER_HPP_

#include "pkg00_base_interfaces/msg/detail/bms_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace pkg00_base_interfaces
{

namespace msg
{

namespace builder
{

class Init_BmsInfo_error_code
{
public:
  explicit Init_BmsInfo_error_code(::pkg00_base_interfaces::msg::BmsInfo & msg)
  : msg_(msg)
  {}
  ::pkg00_base_interfaces::msg::BmsInfo error_code(::pkg00_base_interfaces::msg::BmsInfo::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::BmsInfo msg_;
};

class Init_BmsInfo_status
{
public:
  explicit Init_BmsInfo_status(::pkg00_base_interfaces::msg::BmsInfo & msg)
  : msg_(msg)
  {}
  Init_BmsInfo_error_code status(::pkg00_base_interfaces::msg::BmsInfo::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_BmsInfo_error_code(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::BmsInfo msg_;
};

class Init_BmsInfo_soc
{
public:
  explicit Init_BmsInfo_soc(::pkg00_base_interfaces::msg::BmsInfo & msg)
  : msg_(msg)
  {}
  Init_BmsInfo_status soc(::pkg00_base_interfaces::msg::BmsInfo::_soc_type arg)
  {
    msg_.soc = std::move(arg);
    return Init_BmsInfo_status(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::BmsInfo msg_;
};

class Init_BmsInfo_state
{
public:
  explicit Init_BmsInfo_state(::pkg00_base_interfaces::msg::BmsInfo & msg)
  : msg_(msg)
  {}
  Init_BmsInfo_soc state(::pkg00_base_interfaces::msg::BmsInfo::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_BmsInfo_soc(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::BmsInfo msg_;
};

class Init_BmsInfo_vcell1
{
public:
  explicit Init_BmsInfo_vcell1(::pkg00_base_interfaces::msg::BmsInfo & msg)
  : msg_(msg)
  {}
  Init_BmsInfo_state vcell1(::pkg00_base_interfaces::msg::BmsInfo::_vcell1_type arg)
  {
    msg_.vcell1 = std::move(arg);
    return Init_BmsInfo_state(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::BmsInfo msg_;
};

class Init_BmsInfo_vcell
{
public:
  explicit Init_BmsInfo_vcell(::pkg00_base_interfaces::msg::BmsInfo & msg)
  : msg_(msg)
  {}
  Init_BmsInfo_vcell1 vcell(::pkg00_base_interfaces::msg::BmsInfo::_vcell_type arg)
  {
    msg_.vcell = std::move(arg);
    return Init_BmsInfo_vcell1(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::BmsInfo msg_;
};

class Init_BmsInfo_pack_status
{
public:
  explicit Init_BmsInfo_pack_status(::pkg00_base_interfaces::msg::BmsInfo & msg)
  : msg_(msg)
  {}
  Init_BmsInfo_vcell pack_status(::pkg00_base_interfaces::msg::BmsInfo::_pack_status_type arg)
  {
    msg_.pack_status = std::move(arg);
    return Init_BmsInfo_vcell(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::BmsInfo msg_;
};

class Init_BmsInfo_alarm
{
public:
  explicit Init_BmsInfo_alarm(::pkg00_base_interfaces::msg::BmsInfo & msg)
  : msg_(msg)
  {}
  Init_BmsInfo_pack_status alarm(::pkg00_base_interfaces::msg::BmsInfo::_alarm_type arg)
  {
    msg_.alarm = std::move(arg);
    return Init_BmsInfo_pack_status(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::BmsInfo msg_;
};

class Init_BmsInfo_protect
{
public:
  explicit Init_BmsInfo_protect(::pkg00_base_interfaces::msg::BmsInfo & msg)
  : msg_(msg)
  {}
  Init_BmsInfo_alarm protect(::pkg00_base_interfaces::msg::BmsInfo::_protect_type arg)
  {
    msg_.protect = std::move(arg);
    return Init_BmsInfo_alarm(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::BmsInfo msg_;
};

class Init_BmsInfo_cycle_count
{
public:
  explicit Init_BmsInfo_cycle_count(::pkg00_base_interfaces::msg::BmsInfo & msg)
  : msg_(msg)
  {}
  Init_BmsInfo_protect cycle_count(::pkg00_base_interfaces::msg::BmsInfo::_cycle_count_type arg)
  {
    msg_.cycle_count = std::move(arg);
    return Init_BmsInfo_protect(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::BmsInfo msg_;
};

class Init_BmsInfo_rc
{
public:
  explicit Init_BmsInfo_rc(::pkg00_base_interfaces::msg::BmsInfo & msg)
  : msg_(msg)
  {}
  Init_BmsInfo_cycle_count rc(::pkg00_base_interfaces::msg::BmsInfo::_rc_type arg)
  {
    msg_.rc = std::move(arg);
    return Init_BmsInfo_cycle_count(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::BmsInfo msg_;
};

class Init_BmsInfo_fcc
{
public:
  explicit Init_BmsInfo_fcc(::pkg00_base_interfaces::msg::BmsInfo & msg)
  : msg_(msg)
  {}
  Init_BmsInfo_rc fcc(::pkg00_base_interfaces::msg::BmsInfo::_fcc_type arg)
  {
    msg_.fcc = std::move(arg);
    return Init_BmsInfo_rc(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::BmsInfo msg_;
};

class Init_BmsInfo_rsoc
{
public:
  explicit Init_BmsInfo_rsoc(::pkg00_base_interfaces::msg::BmsInfo & msg)
  : msg_(msg)
  {}
  Init_BmsInfo_fcc rsoc(::pkg00_base_interfaces::msg::BmsInfo::_rsoc_type arg)
  {
    msg_.rsoc = std::move(arg);
    return Init_BmsInfo_fcc(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::BmsInfo msg_;
};

class Init_BmsInfo_vmaxmin_no
{
public:
  explicit Init_BmsInfo_vmaxmin_no(::pkg00_base_interfaces::msg::BmsInfo & msg)
  : msg_(msg)
  {}
  Init_BmsInfo_rsoc vmaxmin_no(::pkg00_base_interfaces::msg::BmsInfo::_vmaxmin_no_type arg)
  {
    msg_.vmaxmin_no = std::move(arg);
    return Init_BmsInfo_rsoc(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::BmsInfo msg_;
};

class Init_BmsInfo_vmin
{
public:
  explicit Init_BmsInfo_vmin(::pkg00_base_interfaces::msg::BmsInfo & msg)
  : msg_(msg)
  {}
  Init_BmsInfo_vmaxmin_no vmin(::pkg00_base_interfaces::msg::BmsInfo::_vmin_type arg)
  {
    msg_.vmin = std::move(arg);
    return Init_BmsInfo_vmaxmin_no(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::BmsInfo msg_;
};

class Init_BmsInfo_vmax
{
public:
  explicit Init_BmsInfo_vmax(::pkg00_base_interfaces::msg::BmsInfo & msg)
  : msg_(msg)
  {}
  Init_BmsInfo_vmin vmax(::pkg00_base_interfaces::msg::BmsInfo::_vmax_type arg)
  {
    msg_.vmax = std::move(arg);
    return Init_BmsInfo_vmin(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::BmsInfo msg_;
};

class Init_BmsInfo_tmin
{
public:
  explicit Init_BmsInfo_tmin(::pkg00_base_interfaces::msg::BmsInfo & msg)
  : msg_(msg)
  {}
  Init_BmsInfo_vmax tmin(::pkg00_base_interfaces::msg::BmsInfo::_tmin_type arg)
  {
    msg_.tmin = std::move(arg);
    return Init_BmsInfo_vmax(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::BmsInfo msg_;
};

class Init_BmsInfo_tmax
{
public:
  explicit Init_BmsInfo_tmax(::pkg00_base_interfaces::msg::BmsInfo & msg)
  : msg_(msg)
  {}
  Init_BmsInfo_tmin tmax(::pkg00_base_interfaces::msg::BmsInfo::_tmax_type arg)
  {
    msg_.tmax = std::move(arg);
    return Init_BmsInfo_tmin(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::BmsInfo msg_;
};

class Init_BmsInfo_temp6
{
public:
  explicit Init_BmsInfo_temp6(::pkg00_base_interfaces::msg::BmsInfo & msg)
  : msg_(msg)
  {}
  Init_BmsInfo_tmax temp6(::pkg00_base_interfaces::msg::BmsInfo::_temp6_type arg)
  {
    msg_.temp6 = std::move(arg);
    return Init_BmsInfo_tmax(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::BmsInfo msg_;
};

class Init_BmsInfo_temp5
{
public:
  explicit Init_BmsInfo_temp5(::pkg00_base_interfaces::msg::BmsInfo & msg)
  : msg_(msg)
  {}
  Init_BmsInfo_temp6 temp5(::pkg00_base_interfaces::msg::BmsInfo::_temp5_type arg)
  {
    msg_.temp5 = std::move(arg);
    return Init_BmsInfo_temp6(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::BmsInfo msg_;
};

class Init_BmsInfo_temp4
{
public:
  explicit Init_BmsInfo_temp4(::pkg00_base_interfaces::msg::BmsInfo & msg)
  : msg_(msg)
  {}
  Init_BmsInfo_temp5 temp4(::pkg00_base_interfaces::msg::BmsInfo::_temp4_type arg)
  {
    msg_.temp4 = std::move(arg);
    return Init_BmsInfo_temp5(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::BmsInfo msg_;
};

class Init_BmsInfo_temp3
{
public:
  explicit Init_BmsInfo_temp3(::pkg00_base_interfaces::msg::BmsInfo & msg)
  : msg_(msg)
  {}
  Init_BmsInfo_temp4 temp3(::pkg00_base_interfaces::msg::BmsInfo::_temp3_type arg)
  {
    msg_.temp3 = std::move(arg);
    return Init_BmsInfo_temp4(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::BmsInfo msg_;
};

class Init_BmsInfo_temp2
{
public:
  explicit Init_BmsInfo_temp2(::pkg00_base_interfaces::msg::BmsInfo & msg)
  : msg_(msg)
  {}
  Init_BmsInfo_temp3 temp2(::pkg00_base_interfaces::msg::BmsInfo::_temp2_type arg)
  {
    msg_.temp2 = std::move(arg);
    return Init_BmsInfo_temp3(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::BmsInfo msg_;
};

class Init_BmsInfo_temp1
{
public:
  explicit Init_BmsInfo_temp1(::pkg00_base_interfaces::msg::BmsInfo & msg)
  : msg_(msg)
  {}
  Init_BmsInfo_temp2 temp1(::pkg00_base_interfaces::msg::BmsInfo::_temp1_type arg)
  {
    msg_.temp1 = std::move(arg);
    return Init_BmsInfo_temp2(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::BmsInfo msg_;
};

class Init_BmsInfo_temp
{
public:
  explicit Init_BmsInfo_temp(::pkg00_base_interfaces::msg::BmsInfo & msg)
  : msg_(msg)
  {}
  Init_BmsInfo_temp1 temp(::pkg00_base_interfaces::msg::BmsInfo::_temp_type arg)
  {
    msg_.temp = std::move(arg);
    return Init_BmsInfo_temp1(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::BmsInfo msg_;
};

class Init_BmsInfo_cur_cadc
{
public:
  explicit Init_BmsInfo_cur_cadc(::pkg00_base_interfaces::msg::BmsInfo & msg)
  : msg_(msg)
  {}
  Init_BmsInfo_temp cur_cadc(::pkg00_base_interfaces::msg::BmsInfo::_cur_cadc_type arg)
  {
    msg_.cur_cadc = std::move(arg);
    return Init_BmsInfo_temp(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::BmsInfo msg_;
};

class Init_BmsInfo_voltage
{
public:
  explicit Init_BmsInfo_voltage(::pkg00_base_interfaces::msg::BmsInfo & msg)
  : msg_(msg)
  {}
  Init_BmsInfo_cur_cadc voltage(::pkg00_base_interfaces::msg::BmsInfo::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return Init_BmsInfo_cur_cadc(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::BmsInfo msg_;
};

class Init_BmsInfo_hsoc
{
public:
  explicit Init_BmsInfo_hsoc(::pkg00_base_interfaces::msg::BmsInfo & msg)
  : msg_(msg)
  {}
  Init_BmsInfo_voltage hsoc(::pkg00_base_interfaces::msg::BmsInfo::_hsoc_type arg)
  {
    msg_.hsoc = std::move(arg);
    return Init_BmsInfo_voltage(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::BmsInfo msg_;
};

class Init_BmsInfo_run_time
{
public:
  explicit Init_BmsInfo_run_time(::pkg00_base_interfaces::msg::BmsInfo & msg)
  : msg_(msg)
  {}
  Init_BmsInfo_hsoc run_time(::pkg00_base_interfaces::msg::BmsInfo::_run_time_type arg)
  {
    msg_.run_time = std::move(arg);
    return Init_BmsInfo_hsoc(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::BmsInfo msg_;
};

class Init_BmsInfo_cell_num
{
public:
  Init_BmsInfo_cell_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BmsInfo_run_time cell_num(::pkg00_base_interfaces::msg::BmsInfo::_cell_num_type arg)
  {
    msg_.cell_num = std::move(arg);
    return Init_BmsInfo_run_time(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::BmsInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pkg00_base_interfaces::msg::BmsInfo>()
{
  return pkg00_base_interfaces::msg::builder::Init_BmsInfo_cell_num();
}

}  // namespace pkg00_base_interfaces

#endif  // PKG00_BASE_INTERFACES__MSG__DETAIL__BMS_INFO__BUILDER_HPP_
