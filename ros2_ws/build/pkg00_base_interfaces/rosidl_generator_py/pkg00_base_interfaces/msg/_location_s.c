// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from pkg00_base_interfaces:msg/Location.idl
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
#include "pkg00_base_interfaces/msg/detail/location__struct.h"
#include "pkg00_base_interfaces/msg/detail/location__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool pkg00_base_interfaces__msg__location__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("pkg00_base_interfaces.msg._location.Location", full_classname_dest, 44) == 0);
  }
  pkg00_base_interfaces__msg__Location * ros_message = _ros_message;
  {  // x
    PyObject * field = PyObject_GetAttrString(_pymsg, "x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y
    PyObject * field = PyObject_GetAttrString(_pymsg, "y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // error
    PyObject * field = PyObject_GetAttrString(_pymsg, "error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->error = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hall_location
    PyObject * field = PyObject_GetAttrString(_pymsg, "hall_location");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hall_location = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // lift_son_loc_cali
    PyObject * field = PyObject_GetAttrString(_pymsg, "lift_son_loc_cali");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lift_son_loc_cali = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // lift_current_loc
    PyObject * field = PyObject_GetAttrString(_pymsg, "lift_current_loc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lift_current_loc = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // lift_horseshoe_en
    PyObject * field = PyObject_GetAttrString(_pymsg, "lift_horseshoe_en");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lift_horseshoe_en = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pkg00_base_interfaces__msg__location__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Location */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pkg00_base_interfaces.msg._location");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Location");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pkg00_base_interfaces__msg__Location * ros_message = (pkg00_base_interfaces__msg__Location *)raw_ros_message;
  {  // x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hall_location
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->hall_location);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hall_location", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lift_son_loc_cali
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lift_son_loc_cali);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lift_son_loc_cali", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lift_current_loc
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lift_current_loc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lift_current_loc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lift_horseshoe_en
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lift_horseshoe_en);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lift_horseshoe_en", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
