/* Trường hợp 1 đĩa: chuyển A sang C.
   Trường hợp 2 đĩa: n-1 A sang B, n A sang C; n-1 B sang C.
   Trường hợp 3 đĩa(n, n-1, n-2): n-2 A sang C; n-1 A sang B, n-2 C sang B, n A sang C;
   --> Quy về TH 2 đĩa(n, n-1): n-1 B sang A, n B sang C, n -1 A sang C */

#include <iostream>

void transit(int n, char a, char b) {
  std::cout << "Disk " << n << " moved from " << a << " to " << b << std::endl;
}

void towerOfHanoi(int n, char a, char b, char c) {
  if (n == 1) {
    transit(n, a, c);
  } else {
    towerOfHanoi(n - 1, a, c, b);
    transit(n, a, c);
    towerOfHanoi(n - 1, b, a, c);
  }
}

int main() {
  int n = 3;
  towerOfHanoi(n, 'A', 'B', 'C');
  return 0;
}
