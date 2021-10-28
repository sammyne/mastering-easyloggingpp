
add_library(sharing-logging-repository-hello STATIC src/hello.cc)
target_include_directories(sharing-logging-repository-hello
  PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
)
