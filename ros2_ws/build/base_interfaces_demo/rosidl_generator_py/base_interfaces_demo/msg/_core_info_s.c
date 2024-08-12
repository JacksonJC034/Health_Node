// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from base_interfaces_demo:msg/CoreInfo.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "base_interfaces_demo/msg/detail/core_info__struct.h"
#include "base_interfaces_demo/msg/detail/core_info__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool base_interfaces_demo__msg__core_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("base_interfaces_demo.msg._core_info.CoreInfo", full_classname_dest, 44) == 0);
  }
  base_interfaces_demo__msg__CoreInfo * ros_message = _ros_message;
  {  // cpu_usage
    PyObject * field = PyObject_GetAttrString(_pymsg, "cpu_usage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cpu_usage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // memory_usage
    PyObject * field = PyObject_GetAttrString(_pymsg, "memory_usage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->memory_usage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // disk_usage
    PyObject * field = PyObject_GetAttrString(_pymsg, "disk_usage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->disk_usage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cpu_frequency
    PyObject * field = PyObject_GetAttrString(_pymsg, "cpu_frequency");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cpu_frequency = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // nic_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "nic_status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->nic_status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temperature = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * base_interfaces_demo__msg__core_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CoreInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfaces_demo.msg._core_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CoreInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfaces_demo__msg__CoreInfo * ros_message = (base_interfaces_demo__msg__CoreInfo *)raw_ros_message;
  {  // cpu_usage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cpu_usage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cpu_usage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // memory_usage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->memory_usage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "memory_usage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // disk_usage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->disk_usage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "disk_usage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cpu_frequency
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cpu_frequency);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cpu_frequency", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nic_status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->nic_status.data,
      strlen(ros_message->nic_status.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "nic_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}