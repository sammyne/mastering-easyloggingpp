
add_subdirectory(hello)

add_executable(sharing-logging-repository main.cc)
target_link_libraries(sharing-logging-repository sharing-logging-repository-hello)
