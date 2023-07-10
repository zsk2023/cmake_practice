cmake_minimum_required(VERSION 3.10)

project(vegetables)

include_directories(.)

aux_source_directory(src SRC_VEGETABLES)

add_library(vegetable ${SRC_VEGETABLES})