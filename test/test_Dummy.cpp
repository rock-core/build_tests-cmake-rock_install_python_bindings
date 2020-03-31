#include <boost/test/unit_test.hpp>
#include <rock_install_python_bindings/Dummy.hpp>

using namespace rock_install_python_bindings;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    rock_install_python_bindings::DummyClass dummy;
    dummy.welcome();
}
