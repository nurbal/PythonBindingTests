
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
