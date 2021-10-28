include(ExternalProject)

set(out_dir ${CMAKE_CURRENT_BINARY_DIR}/easylogging++)

ExternalProject_Add(build-easyloggingpp
  URL https://github.com/amrayn/easyloggingpp/archive/refs/tags/v9.97.0.tar.gz
  URL_HASH SHA256=9110638e21ef02428254af8688bf9e766483db8cc2624144aa3c59006907ce22
  CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${out_dir} -Dbuild_static_lib=ON
)

add_library(easyloggingpp STATIC IMPORTED GLOBAL)
add_dependencies(easyloggingpp build-easyloggingpp)
set_property(TARGET easyloggingpp PROPERTY IMPORTED_LOCATION ${out_dir}/lib/libeasyloggingpp.a)
set_property(TARGET easyloggingpp PROPERTY INTERFACE_INCLUDE_DIRECTORIES ${out_dir}/include)
