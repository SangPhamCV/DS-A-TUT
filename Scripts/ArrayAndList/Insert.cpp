#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int* a = new int[n];

    for (int i{0}; i < n; i++) {
        a[i] = i + 1;
    }

    int k, x;
    std::cin >> k >> x;

    while (k > n || k < 0) {
        std::cin >> k;
    }

    for (int i{n}; i > k; i--) {
        a[i] = a[i - 1];
    }

    a[k] = x;

    for (int i{0}; i <= n; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    delete[] a;
    return 0;
}
