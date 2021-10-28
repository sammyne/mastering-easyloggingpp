#include "easylogging++.h"

#include "hello/hello.h"

// INITIALIZE_EASYLOGGINGPP
// clang-format off
SHARE_EASYLOGGINGPP(new el::base::Storage(el::LogBuilderPtr(new el::base::DefaultLogBuilder())))
// clang-format on

// INITIALIZE_NULL_EASYLOGGINGPP;

int main(int argc, char* argv[]) {
  // el::Helpers::setStorage(el::base::type::StoragePointer(
  //    new el::base::Storage(el::LogBuilderPtr(new el::base::DefaultLogBuilder()))));

  el::Configurations c;
  c.setToDefault();
  c.setGlobally(el::ConfigurationType::ToFile, "true");
  c.setGlobally(el::ConfigurationType::Filename, "el.log");
  c.setGlobally(el::ConfigurationType::Format, "%datetime %levshort [%logger] %msg");

  el::Loggers::reconfigureAllLoggers(c);

  auto logger = el::Loggers::getLogger("default");

  logger->warn("hello %v", "world");

  LOG(INFO) << "My first info log using default logger";

  HelloWorld();

  return 0;
}
