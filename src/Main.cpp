#include <iostream>
#include <rock_install_python_bindings/Dummy.hpp>

int main(int argc, char** argv)
{
    rock_install_python_bindings::DummyClass dummyClass;
    dummyClass.welcome();

    return 0;
}
