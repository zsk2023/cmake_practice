cmake_minimum_required(VERSION 3.10)

project(meats)

include_directories(.)

aux_source_directory(src SRC_MEAT)

add_library(meat ${SRC_MEAT})