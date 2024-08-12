# generated from rosidl_generator_py/resource/_idl.py.em
# with input from base_interfaces_demo:msg/CoreInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CoreInfo(type):
    """Metaclass of message 'CoreInfo'."""

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
                'base_interfaces_demo.msg.CoreInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__core_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__core_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__core_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__core_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__core_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CoreInfo(metaclass=Metaclass_CoreInfo):
    """Message class 'CoreInfo'."""

    __slots__ = [
        '_cpu_usage',
        '_memory_usage',
        '_disk_usage',
        '_cpu_frequency',
        '_nic_status',
        '_temperature',
    ]

    _fields_and_field_types = {
        'cpu_usage': 'double',
        'memory_usage': 'double',
        'disk_usage': 'double',
        'cpu_frequency': 'double',
        'nic_status': 'string',
        'temperature': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cpu_usage = kwargs.get('cpu_usage', float())
        self.memory_usage = kwargs.get('memory_usage', float())
        self.disk_usage = kwargs.get('disk_usage', float())
        self.cpu_frequency = kwargs.get('cpu_frequency', float())
        self.nic_status = kwargs.get('nic_status', str())
        self.temperature = kwargs.get('temperature', float())

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
        if self.cpu_usage != other.cpu_usage:
            return False
        if self.memory_usage != other.memory_usage:
            return False
        if self.disk_usage != other.disk_usage:
            return False
        if self.cpu_frequency != other.cpu_frequency:
            return False
        if self.nic_status != other.nic_status:
            return False
        if self.temperature != other.temperature:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def cpu_usage(self):
        """Message field 'cpu_usage'."""
        return self._cpu_usage

    @cpu_usage.setter
    def cpu_usage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cpu_usage' field must be of type 'float'"
        self._cpu_usage = value

    @property
    def memory_usage(self):
        """Message field 'memory_usage'."""
        return self._memory_usage

    @memory_usage.setter
    def memory_usage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'memory_usage' field must be of type 'float'"
        self._memory_usage = value

    @property
    def disk_usage(self):
        """Message field 'disk_usage'."""
        return self._disk_usage

    @disk_usage.setter
    def disk_usage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'disk_usage' field must be of type 'float'"
        self._disk_usage = value

    @property
    def cpu_frequency(self):
        """Message field 'cpu_frequency'."""
        return self._cpu_frequency

    @cpu_frequency.setter
    def cpu_frequency(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cpu_frequency' field must be of type 'float'"
        self._cpu_frequency = value

    @property
    def nic_status(self):
        """Message field 'nic_status'."""
        return self._nic_status

    @nic_status.setter
    def nic_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'nic_status' field must be of type 'str'"
        self._nic_status = value

    @property
    def temperature(self):
        """Message field 'temperature'."""
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temperature' field must be of type 'float'"
        self._temperature = value
