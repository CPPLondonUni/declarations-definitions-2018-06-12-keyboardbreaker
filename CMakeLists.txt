cmake_minimum_required(VERSION 3.4)
project(defndecl)

add_executable(app main.cpp utility.cpp utility.h)
set_target_properties(app PROPERTIES CXX_STANDARD 14)
