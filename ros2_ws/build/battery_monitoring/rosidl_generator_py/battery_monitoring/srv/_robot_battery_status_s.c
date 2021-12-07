// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from battery_monitoring:srv/RobotBatteryStatus.idl
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
#include "battery_monitoring/srv/detail/robot_battery_status__struct.h"
#include "battery_monitoring/srv/detail/robot_battery_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool battery_monitoring__srv__robot_battery_status__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[72];
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
    assert(strncmp("battery_monitoring.srv._robot_battery_status.RobotBatteryStatus_Request", full_classname_dest, 71) == 0);
  }
  battery_monitoring__srv__RobotBatteryStatus_Request * ros_message = _ros_message;
  {  // batterynum
    PyObject * field = PyObject_GetAttrString(_pymsg, "batterynum");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->batterynum = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * battery_monitoring__srv__robot_battery_status__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RobotBatteryStatus_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("battery_monitoring.srv._robot_battery_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RobotBatteryStatus_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  battery_monitoring__srv__RobotBatteryStatus_Request * ros_message = (battery_monitoring__srv__RobotBatteryStatus_Request *)raw_ros_message;
  {  // batterynum
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->batterynum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "batterynum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "battery_monitoring/srv/detail/robot_battery_status__struct.h"
// already included above
// #include "battery_monitoring/srv/detail/robot_battery_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool battery_monitoring__srv__robot_battery_status__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[73];
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
    assert(strncmp("battery_monitoring.srv._robot_battery_status.RobotBatteryStatus_Response", full_classname_dest, 72) == 0);
  }
  battery_monitoring__srv__RobotBatteryStatus_Response * ros_message = _ros_message;
  {  // percentage
    PyObject * field = PyObject_GetAttrString(_pymsg, "percentage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->percentage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * battery_monitoring__srv__robot_battery_status__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RobotBatteryStatus_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("battery_monitoring.srv._robot_battery_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RobotBatteryStatus_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  battery_monitoring__srv__RobotBatteryStatus_Response * ros_message = (battery_monitoring__srv__RobotBatteryStatus_Response *)raw_ros_message;
  {  // percentage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->percentage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "percentage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
