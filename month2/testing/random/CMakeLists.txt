cmake_minimum_required(VERSION 3.5)

project(project_random_test)

add_executable(random_test 
    main.cpp
    RandomFoo.cpp
)

set_target_properties(random_test PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)