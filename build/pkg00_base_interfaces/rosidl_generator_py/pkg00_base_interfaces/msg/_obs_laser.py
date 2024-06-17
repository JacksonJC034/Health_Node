# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pkg00_base_interfaces:msg/ObsLaser.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObsLaser(type):
    """Metaclass of message 'ObsLaser'."""

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
            module = import_type_support('pkg00_base_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pkg00_base_interfaces.msg.ObsLaser')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__obs_laser
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__obs_laser
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__obs_laser
            cls._TYPE_SUPPORT = module.type_support_msg__msg__obs_laser
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__obs_laser

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ObsLaser(metaclass=Metaclass_ObsLaser):
    """Message class 'ObsLaser'."""

    __slots__ = [
        '_device_id',
        '_subpeak_quality',
        '_temp_code',
        '_subpeak_strength',
        '_mainpeak',
        '_mainpeak_correct',
        '_mainpeak_strength',
        '_sunlight_base',
    ]

    _fields_and_field_types = {
        'device_id': 'int32',
        'subpeak_quality': 'int32',
        'temp_code': 'int32',
        'subpeak_strength': 'int32',
        'mainpeak': 'int32',
        'mainpeak_correct': 'int32',
        'mainpeak_strength': 'int32',
        'sunlight_base': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.device_id = kwargs.get('device_id', int())
        self.subpeak_quality = kwargs.get('subpeak_quality', int())
        self.temp_code = kwargs.get('temp_code', int())
        self.subpeak_strength = kwargs.get('subpeak_strength', int())
        self.mainpeak = kwargs.get('mainpeak', int())
        self.mainpeak_correct = kwargs.get('mainpeak_correct', int())
        self.mainpeak_strength = kwargs.get('mainpeak_strength', int())
        self.sunlight_base = kwargs.get('sunlight_base', int())

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
        if self.device_id != other.device_id:
            return False
        if self.subpeak_quality != other.subpeak_quality:
            return False
        if self.temp_code != other.temp_code:
            return False
        if self.subpeak_strength != other.subpeak_strength:
            return False
        if self.mainpeak != other.mainpeak:
            return False
        if self.mainpeak_correct != other.mainpeak_correct:
            return False
        if self.mainpeak_strength != other.mainpeak_strength:
            return False
        if self.sunlight_base != other.sunlight_base:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def device_id(self):
        """Message field 'device_id'."""
        return self._device_id

    @device_id.setter
    def device_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'device_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'device_id' field must be an integer in [-2147483648, 2147483647]"
        self._device_id = value

    @property
    def subpeak_quality(self):
        """Message field 'subpeak_quality'."""
        return self._subpeak_quality

    @subpeak_quality.setter
    def subpeak_quality(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'subpeak_quality' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'subpeak_quality' field must be an integer in [-2147483648, 2147483647]"
        self._subpeak_quality = value

    @property
    def temp_code(self):
        """Message field 'temp_code'."""
        return self._temp_code

    @temp_code.setter
    def temp_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'temp_code' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'temp_code' field must be an integer in [-2147483648, 2147483647]"
        self._temp_code = value

    @property
    def subpeak_strength(self):
        """Message field 'subpeak_strength'."""
        return self._subpeak_strength

    @subpeak_strength.setter
    def subpeak_strength(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'subpeak_strength' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'subpeak_strength' field must be an integer in [-2147483648, 2147483647]"
        self._subpeak_strength = value

    @property
    def mainpeak(self):
        """Message field 'mainpeak'."""
        return self._mainpeak

    @mainpeak.setter
    def mainpeak(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mainpeak' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mainpeak' field must be an integer in [-2147483648, 2147483647]"
        self._mainpeak = value

    @property
    def mainpeak_correct(self):
        """Message field 'mainpeak_correct'."""
        return self._mainpeak_correct

    @mainpeak_correct.setter
    def mainpeak_correct(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mainpeak_correct' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mainpeak_correct' field must be an integer in [-2147483648, 2147483647]"
        self._mainpeak_correct = value

    @property
    def mainpeak_strength(self):
        """Message field 'mainpeak_strength'."""
        return self._mainpeak_strength

    @mainpeak_strength.setter
    def mainpeak_strength(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mainpeak_strength' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mainpeak_strength' field must be an integer in [-2147483648, 2147483647]"
        self._mainpeak_strength = value

    @property
    def sunlight_base(self):
        """Message field 'sunlight_base'."""
        return self._sunlight_base

    @sunlight_base.setter
    def sunlight_base(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sunlight_base' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sunlight_base' field must be an integer in [-2147483648, 2147483647]"
        self._sunlight_base = value
