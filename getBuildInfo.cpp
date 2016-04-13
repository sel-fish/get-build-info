#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void getBuildInfo()
{
  ostringstream os;
  os << "Build time: " << __DATE__ << " " << __TIME__ << endl;
  char hostname[1024];
  gethostname(hostname, 1024);
  os << "Build node: " << hostname << " " << BUILD_SYSTEM << ":" << BUILD_PATH << endl;
  os << "Build code: " << GIT_INFO << endl;
  os << "Build tool: " << BUILD_TOOL << endl;
  cout << os.str();
}

int main(int argc, char** argv)
{
  getBuildInfo();
  return 0;
}
