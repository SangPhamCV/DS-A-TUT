#include <iostream>

int factorial(int n) {
  int fac {1};
  for (size_t i{1}; i <= n; i++) {
    fac *= i;
  }
  return fac;
}

int main() {
  int n;
  std::cin >> n;
  int result = factorial(n);
  std::cout << result << std::endl;
  return 0;
}
