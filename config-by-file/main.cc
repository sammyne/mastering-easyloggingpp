#include "easylogging++.h"

INITIALIZE_EASYLOGGINGPP

int main(int argc, char* argv[]) {
  if (argc < 2) {
    printf("missing path of configuration file\n");
    return -1;
  }

  // Load configuration from file
  el::Configurations conf(argv[1]);
  // Reconfigure single logger
  // el::Loggers::reconfigureLogger("default", conf);
  // Actually reconfigure all loggers instead
  el::Loggers::reconfigureAllLoggers(conf);
  // Now all the loggers will use configuration from file

  LOG(INFO) << "My first info log using default logger";
  LOG(WARNING) << "This is a msg for warning";
  LOG(DEBUG) << "This is a msg for debugging";

  return 0;
}
