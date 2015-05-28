
set(SOURCE_FILES
    main.cpp
    hello.cpp
    Number.cpp
    )
    
set(HEADER_FILES
    hello.h
    number.h
    )

add_executable("hello_world" ${SOURCE_FILES} ${HEADER_FILES})



# SWIG STUFF...

set (SWIG_FILES
    swig/Number.i
 #   swig/hello.i    
    )

FIND_PACKAGE(SWIG REQUIRED)
INCLUDE(${SWIG_USE_FILE})

FIND_PACKAGE(PythonLibs)
INCLUDE_DIRECTORIES(${PYTHON_INCLUDE_PATH})

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR})

SET(CMAKE_SWIG_FLAGS "")

SET_SOURCE_FILES_PROPERTIES(${SWIG_FILES} PROPERTIES CPLUSPLUS ON)
SET_SOURCE_FILES_PROPERTIES(${SWIG_FILES} PROPERTIES SWIG_FLAGS "-includeall")
SWIG_ADD_MODULE(Number python swig/Number.i Number.cpp)
SWIG_LINK_LIBRARIES(Number ${PYTHON_LIBRARIES})

# TEST PYTHON SCRIPT COPIED TO BUILD DIR
# just type $python Number_test.py to launch it once project built...

FILE(COPY swig/Number_test.py DESTINATION ${CMAKE_CURRENT_BINARY_DIR})



