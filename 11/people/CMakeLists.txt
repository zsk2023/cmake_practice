cmake_minimum_required(VERSION 3.10)

project(peoples)

include_directories(.)

aux_source_directory(src SRC_PEOPLE)

add_library(people ${SRC_PEOPLE})
target_link_libraries(people meat vegetable)