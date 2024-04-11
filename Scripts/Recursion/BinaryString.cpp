#include <iostream>
#include <string>

void generateStringUnit(int K, std::string& str, int n) {
  if (n == K) {
    str[n] = '\0';
    std::cout << str << std::endl;  // Output the generated string
    return;
  }

  if (str[n-1] == '1') {
    str[n] = '0';
    generateStringUnit(K, str, n+1);
  } else if (str[n - 1] == '0') {
    str[n] = '0';
    generateStringUnit(K, str, n+1);
    str[n] = '1';
    generateStringUnit(K, str, n+1);
  }
}

void generateString(int K) {
  if (K <= 0) return;

  std::string str(K, '0'); // Initialize a string of length K filled with '0'
  generateStringUnit(K, str, 1);
  str[0] = '1';  // Start with '1' as the first character
  generateStringUnit(K, str, 1);
}

int main() {
  int K;
  std::cin >> K;
  generateString(K);
  return 0;
}
