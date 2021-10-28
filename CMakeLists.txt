cmake_minimum_required(VERSION 3.16)

project(mastering-easylogging++ CXX)

set(CMAKE_CXX_STANDARD 17)

include(third-party/easyloggingpp.cmake)

get_target_property(easyloggingpp_header_dir easyloggingpp INTERFACE_INCLUDE_DIRECTORIES)

include_directories(${easyloggingpp_header_dir})

link_libraries(easyloggingpp)

add_subdirectory(config-by-file)
add_subdirectory(quickstart)
add_subdirectory(sharing-logging-repository)
