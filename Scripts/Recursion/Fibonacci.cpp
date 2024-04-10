#include <iostream>

int fib(int a) {
  if (a < 2) return a;
  return fib(a - 1) + fib(a - 2);
}

int main() {
  int a;
  std::cin >> a;
  int out = fib(a);
  std::cout << out << std::endl;
  return 0;
}
