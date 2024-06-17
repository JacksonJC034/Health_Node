# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pkg00_base_interfaces:msg/LiftInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LiftInfo(type):
    """Metaclass of message 'LiftInfo'."""

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
                'pkg00_base_interfaces.msg.LiftInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lift_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lift_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lift_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lift_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lift_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LiftInfo(metaclass=Metaclass_LiftInfo):
    """Message class 'LiftInfo'."""

    __slots__ = [
        '_lift_location',
        '_lift_base_location',
    ]

    _fields_and_field_types = {
        'lift_location': 'int32',
        'lift_base_location': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.lift_location = kwargs.get('lift_location', int())
        self.lift_base_location = kwargs.get('lift_base_location', int())

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
        if self.lift_location != other.lift_location:
            return False
        if self.lift_base_location != other.lift_base_location:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def lift_location(self):
        """Message field 'lift_location'."""
        return self._lift_location

    @lift_location.setter
    def lift_location(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lift_location' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'lift_location' field must be an integer in [-2147483648, 2147483647]"
        self._lift_location = value

    @property
    def lift_base_location(self):
        """Message field 'lift_base_location'."""
        return self._lift_base_location

    @lift_base_location.setter
    def lift_base_location(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lift_base_location' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'lift_base_location' field must be an integer in [-2147483648, 2147483647]"
        self._lift_base_location = value
