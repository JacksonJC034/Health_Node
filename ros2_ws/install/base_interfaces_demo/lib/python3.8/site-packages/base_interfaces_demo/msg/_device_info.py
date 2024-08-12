# generated from rosidl_generator_py/resource/_idl.py.em
# with input from base_interfaces_demo:msg/DeviceInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DeviceInfo(type):
    """Metaclass of message 'DeviceInfo'."""

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
            module = import_type_support('base_interfaces_demo')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'base_interfaces_demo.msg.DeviceInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__device_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__device_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__device_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__device_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__device_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DeviceInfo(metaclass=Metaclass_DeviceInfo):
    """Message class 'DeviceInfo'."""

    __slots__ = [
        '_cpu_used',
        '_cpu0_used',
        '_cpu1_used',
        '_cpu2_used',
        '_cpu3_used',
        '_disk_used',
        '_mem_used',
        '_ghz',
        '_network_status',
    ]

    _fields_and_field_types = {
        'cpu_used': 'double',
        'cpu0_used': 'double',
        'cpu1_used': 'double',
        'cpu2_used': 'double',
        'cpu3_used': 'double',
        'disk_used': 'string',
        'mem_used': 'double',
        'ghz': 'double',
        'network_status': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cpu_used = kwargs.get('cpu_used', float())
        self.cpu0_used = kwargs.get('cpu0_used', float())
        self.cpu1_used = kwargs.get('cpu1_used', float())
        self.cpu2_used = kwargs.get('cpu2_used', float())
        self.cpu3_used = kwargs.get('cpu3_used', float())
        self.disk_used = kwargs.get('disk_used', str())
        self.mem_used = kwargs.get('mem_used', float())
        self.ghz = kwargs.get('ghz', float())
        self.network_status = kwargs.get('network_status', int())

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
        if self.cpu_used != other.cpu_used:
            return False
        if self.cpu0_used != other.cpu0_used:
            return False
        if self.cpu1_used != other.cpu1_used:
            return False
        if self.cpu2_used != other.cpu2_used:
            return False
        if self.cpu3_used != other.cpu3_used:
            return False
        if self.disk_used != other.disk_used:
            return False
        if self.mem_used != other.mem_used:
            return False
        if self.ghz != other.ghz:
            return False
        if self.network_status != other.network_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def cpu_used(self):
        """Message field 'cpu_used'."""
        return self._cpu_used

    @cpu_used.setter
    def cpu_used(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cpu_used' field must be of type 'float'"
        self._cpu_used = value

    @property
    def cpu0_used(self):
        """Message field 'cpu0_used'."""
        return self._cpu0_used

    @cpu0_used.setter
    def cpu0_used(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cpu0_used' field must be of type 'float'"
        self._cpu0_used = value

    @property
    def cpu1_used(self):
        """Message field 'cpu1_used'."""
        return self._cpu1_used

    @cpu1_used.setter
    def cpu1_used(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cpu1_used' field must be of type 'float'"
        self._cpu1_used = value

    @property
    def cpu2_used(self):
        """Message field 'cpu2_used'."""
        return self._cpu2_used

    @cpu2_used.setter
    def cpu2_used(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cpu2_used' field must be of type 'float'"
        self._cpu2_used = value

    @property
    def cpu3_used(self):
        """Message field 'cpu3_used'."""
        return self._cpu3_used

    @cpu3_used.setter
    def cpu3_used(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cpu3_used' field must be of type 'float'"
        self._cpu3_used = value

    @property
    def disk_used(self):
        """Message field 'disk_used'."""
        return self._disk_used

    @disk_used.setter
    def disk_used(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'disk_used' field must be of type 'str'"
        self._disk_used = value

    @property
    def mem_used(self):
        """Message field 'mem_used'."""
        return self._mem_used

    @mem_used.setter
    def mem_used(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mem_used' field must be of type 'float'"
        self._mem_used = value

    @property
    def ghz(self):
        """Message field 'ghz'."""
        return self._ghz

    @ghz.setter
    def ghz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ghz' field must be of type 'float'"
        self._ghz = value

    @property
    def network_status(self):
        """Message field 'network_status'."""
        return self._network_status

    @network_status.setter
    def network_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'network_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'network_status' field must be an integer in [-2147483648, 2147483647]"
        self._network_status = value
