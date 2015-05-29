from libcpp.string cimport string as libcpp_string

cdef extern from "../../number.h":
    cdef cppclass Number[T]:
        # wrap-instances:
        #   NumberInt   := Number[int]
        #   NumberFloat := Number[float]
        Number() except +
        Number(T value) except +
        void SetToZero() 
        void printValue() 
        void setData(libcpp_string, libcpp_string)     
        void printDatas() 
        libcpp_string getData(libcpp_string)
