import rock_install_python_bindings as pb

def test_bindings():
    dummy = pb.PyDummyClass()
    dummy.welcome()
