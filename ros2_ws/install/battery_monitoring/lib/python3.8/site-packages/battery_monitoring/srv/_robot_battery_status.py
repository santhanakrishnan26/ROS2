# generated from rosidl_generator_py/resource/_idl.py.em
# with input from battery_monitoring:srv/RobotBatteryStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotBatteryStatus_Request(type):
    """Metaclass of message 'RobotBatteryStatus_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('battery_monitoring')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'battery_monitoring.srv.RobotBatteryStatus_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__robot_battery_status__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__robot_battery_status__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__robot_battery_status__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__robot_battery_status__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__robot_battery_status__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotBatteryStatus_Request(metaclass=Metaclass_RobotBatteryStatus_Request):
    """Message class 'RobotBatteryStatus_Request'."""

    __slots__ = [
        '_batterynum',
    ]

    _fields_and_field_types = {
        'batterynum': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.batterynum = kwargs.get('batterynum', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.batterynum != other.batterynum:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def batterynum(self):
        """Message field 'batterynum'."""
        return self._batterynum

    @batterynum.setter
    def batterynum(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'batterynum' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'batterynum' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._batterynum = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotBatteryStatus_Response(type):
    """Metaclass of message 'RobotBatteryStatus_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('battery_monitoring')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'battery_monitoring.srv.RobotBatteryStatus_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__robot_battery_status__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__robot_battery_status__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__robot_battery_status__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__robot_battery_status__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__robot_battery_status__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotBatteryStatus_Response(metaclass=Metaclass_RobotBatteryStatus_Response):
    """Message class 'RobotBatteryStatus_Response'."""

    __slots__ = [
        '_percentage',
    ]

    _fields_and_field_types = {
        'percentage': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.percentage = kwargs.get('percentage', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.percentage != other.percentage:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def percentage(self):
        """Message field 'percentage'."""
        return self._percentage

    @percentage.setter
    def percentage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'percentage' field must be of type 'float'"
        self._percentage = value


class Metaclass_RobotBatteryStatus(type):
    """Metaclass of service 'RobotBatteryStatus'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('battery_monitoring')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'battery_monitoring.srv.RobotBatteryStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__robot_battery_status

            from battery_monitoring.srv import _robot_battery_status
            if _robot_battery_status.Metaclass_RobotBatteryStatus_Request._TYPE_SUPPORT is None:
                _robot_battery_status.Metaclass_RobotBatteryStatus_Request.__import_type_support__()
            if _robot_battery_status.Metaclass_RobotBatteryStatus_Response._TYPE_SUPPORT is None:
                _robot_battery_status.Metaclass_RobotBatteryStatus_Response.__import_type_support__()


class RobotBatteryStatus(metaclass=Metaclass_RobotBatteryStatus):
    from battery_monitoring.srv._robot_battery_status import RobotBatteryStatus_Request as Request
    from battery_monitoring.srv._robot_battery_status import RobotBatteryStatus_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
