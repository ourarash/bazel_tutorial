#include <string>

#include "lib1.h"

int main() {
  std::string my_string = "Hello world!";
  CLib1::PrintLine(my_string);
  return 0;
}