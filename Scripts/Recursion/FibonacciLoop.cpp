#include <iostream>
#include <vector>

int fibonacci(int n) {
  if (n <= 2) return 1;

  std::vector<int> fib(n+1);

  for (int i = 3; i <= n; i++) {
    fib[i] = fib[i-1] + fib[i-2];
  }

  return fib[n];
}

int main() {
  int n;
  std::cin >> n;
  int result = fibonacci(n);
  std::cout << result << std::endl;
  return 0;
}
