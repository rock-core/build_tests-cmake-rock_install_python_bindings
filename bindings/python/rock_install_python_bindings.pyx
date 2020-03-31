# distutils: language = c++
# cython: language_level=2

from libcpp.string cimport string
from _rock_install_python_bindings cimport DummyClass as _DummyClass

cdef class PyDummyClass:
    cdef _DummyClass c_DummyClass

    def __cinit__(self):
        self.c_DummyClass = _DummyClass()

    def welcome(self):
        return self.c_DummyClass.welcome()
