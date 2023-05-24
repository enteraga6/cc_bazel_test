#include <iostream>

// Basic fibonacci

int fib(int x) {
  if (x < 2) return 1;
  return fib(x-1) + fib(x-2);
}

int main(int argc, char** argv) {
  std::cout << "fib( 2) = " << fib( 2) << "\n";
  std::cout << "fib( 3) = " << fib( 3) << "\n";
  std::cout << "fib( 5) = " << fib( 5) << "\n";
  std::cout << "fib( 7) = " << fib( 7) << "\n";
  std::cout << "fib(11) = " << fib(11) << "\n";
  return 0;
}