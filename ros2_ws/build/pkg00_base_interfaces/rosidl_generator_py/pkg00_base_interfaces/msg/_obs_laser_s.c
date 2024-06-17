// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from pkg00_base_interfaces:msg/ObsLaser.idl
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
#include "pkg00_base_interfaces/msg/detail/obs_laser__struct.h"
#include "pkg00_base_interfaces/msg/detail/obs_laser__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool pkg00_base_interfaces__msg__obs_laser__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("pkg00_base_interfaces.msg._obs_laser.ObsLaser", full_classname_dest, 45) == 0);
  }
  pkg00_base_interfaces__msg__ObsLaser * ros_message = _ros_message;
  {  // device_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "device_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->device_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // subpeak_quality
    PyObject * field = PyObject_GetAttrString(_pymsg, "subpeak_quality");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->subpeak_quality = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // temp_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->temp_code = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // subpeak_strength
    PyObject * field = PyObject_GetAttrString(_pymsg, "subpeak_strength");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->subpeak_strength = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mainpeak
    PyObject * field = PyObject_GetAttrString(_pymsg, "mainpeak");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mainpeak = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mainpeak_correct
    PyObject * field = PyObject_GetAttrString(_pymsg, "mainpeak_correct");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mainpeak_correct = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mainpeak_strength
    PyObject * field = PyObject_GetAttrString(_pymsg, "mainpeak_strength");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mainpeak_strength = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // sunlight_base
    PyObject * field = PyObject_GetAttrString(_pymsg, "sunlight_base");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sunlight_base = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pkg00_base_interfaces__msg__obs_laser__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ObsLaser */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pkg00_base_interfaces.msg._obs_laser");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ObsLaser");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pkg00_base_interfaces__msg__ObsLaser * ros_message = (pkg00_base_interfaces__msg__ObsLaser *)raw_ros_message;
  {  // device_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->device_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "device_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // subpeak_quality
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->subpeak_quality);
    {
      int rc = PyObject_SetAttrString(_pymessage, "subpeak_quality", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temp_code
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->temp_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // subpeak_strength
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->subpeak_strength);
    {
      int rc = PyObject_SetAttrString(_pymessage, "subpeak_strength", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mainpeak
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mainpeak);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mainpeak", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mainpeak_correct
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mainpeak_correct);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mainpeak_correct", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mainpeak_strength
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mainpeak_strength);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mainpeak_strength", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sunlight_base
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->sunlight_base);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sunlight_base", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
