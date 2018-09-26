#include "gflags/gflags.h"
#include "glog/logging.h"

DEFINE_string(name, ":(", "The name of greetee");

int main(int argc, char *argv[]) {
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  LOG(INFO) << "Hello，" << FLAGS_name << "!";
  return 0;
}
