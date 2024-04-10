#include <iostream>

int fac(int a) {
  if (a <= 1)
    return 1;
  else
    return a * fac(a - 1);
}

int main() {
  int a;
  std::cin >> a;
  int out = fac(a);
  std::cout << out << std::endl;
  return 0;
}
