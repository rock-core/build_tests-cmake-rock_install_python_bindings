from libcpp.string cimport string
cdef extern from "Dummy.hpp" namespace "rock_install_python_bindings":
    cdef cppclass DummyClass:
        DummyClass() except +
        void welcome()
