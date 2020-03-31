rock_library(rock_install_python_bindings
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(rock_install_python_bindings_bin Main.cpp
    DEPS rock_install_python_bindings)

