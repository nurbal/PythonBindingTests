cdef extern from "../../hello.h":
    cdef cppclass Hello:
        Hello () except +
        void sayHello()
