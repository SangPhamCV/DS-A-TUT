#include <iostream>

int exp(int a, int b) {
	if (b==0) return 1;
    return a * exp(a, b - 1);
}

int main() {
  int a, b;
  std::cin >> a >> b;
  int out = exp(a, b);
  std::cout << out << std::endl;
  return 0;
}
