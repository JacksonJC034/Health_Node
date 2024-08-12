// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from base_interfaces_demo:msg/DeviceInfo.idl
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
#include "base_interfaces_demo/msg/detail/device_info__struct.h"
#include "base_interfaces_demo/msg/detail/device_info__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool base_interfaces_demo__msg__device_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("base_interfaces_demo.msg._device_info.DeviceInfo", full_classname_dest, 48) == 0);
  }
  base_interfaces_demo__msg__DeviceInfo * ros_message = _ros_message;
  {  // cpu_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "cpu_used");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cpu_used = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cpu0_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "cpu0_used");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cpu0_used = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cpu1_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "cpu1_used");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cpu1_used = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cpu2_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "cpu2_used");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cpu2_used = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cpu3_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "cpu3_used");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cpu3_used = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // disk_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "disk_used");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->disk_used, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // mem_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "mem_used");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mem_used = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ghz
    PyObject * field = PyObject_GetAttrString(_pymsg, "ghz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ghz = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // network_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "network_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->network_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * base_interfaces_demo__msg__device_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DeviceInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfaces_demo.msg._device_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DeviceInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfaces_demo__msg__DeviceInfo * ros_message = (base_interfaces_demo__msg__DeviceInfo *)raw_ros_message;
  {  // cpu_used
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cpu_used);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cpu_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cpu0_used
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cpu0_used);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cpu0_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cpu1_used
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cpu1_used);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cpu1_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cpu2_used
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cpu2_used);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cpu2_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cpu3_used
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cpu3_used);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cpu3_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // disk_used
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->disk_used.data,
      strlen(ros_message->disk_used.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "disk_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mem_used
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mem_used);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mem_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ghz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ghz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ghz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // network_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->network_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "network_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
