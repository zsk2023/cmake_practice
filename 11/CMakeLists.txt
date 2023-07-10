cmake_minimum_required(VERSION 3.10)

project(cook)

include_directories(.)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/meat meat_binary_dir)
add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/vegetable vegetable_binary_dir)
add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/people people_binary_dir)
# These sentences must be written here. Maybe they refer to the dynamic libraries that are included in library people used here.

add_executable(my_cmake_exe 
                main.cpp 
                )

target_link_libraries(my_cmake_exe people)