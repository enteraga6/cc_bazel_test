#include <iostream>
#include <fmt/core.h>

int main(int argc, char** argv) {
  std::cout << "Hello from C++!\n";
  fmt::print("The answer to everything is {}\n", 42);
  return 0;
}