#include <iostream>

bool AP(const int* a, size_t n) {
    if (n < 2) {
        return false;
    }

    int common_diff{a[1] - a[0]};
    for (size_t i{2}; i < n; i++) {
        if (a[i] - a[i - 1] != common_diff) {
            return false;
        }
    }
    return true;
}

int main() {
    size_t n;
    std::cout << "Enter a number of elements of array: ";
    std::cin >> n;

    int* a = new int[n];
    std::cout << "Enter elements of aray: ";
    for (size_t i{0}; i < n; i++) {
        std::cin >> a[i];
    }

    bool result{AP(a, n)};
    std::cout << "Result: " << std::boolalpha << result << std::endl;
    delete[] a;
    return 0;
}
