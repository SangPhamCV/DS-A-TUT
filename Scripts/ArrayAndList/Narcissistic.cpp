#include <iostream>
#include <cmath>

void Narcissistic(const int* a, size_t n) {
    bool check{false};

    for (size_t i{0}; i < n; i++) {
        int temp = a[i];
        size_t numberOfDigits{0};
            temp /= 10;
            numberOfDigits++;
        }

        temp = a[i];
        int sum{0};
        while (temp != 0) {
            int digit = temp % 10;
            sum += std::pow(digit, numberOfDigits);

            temp /= 10;
        }
        if (sum == a[i]) {
            std::cout << sum << " ";
            check = true;
        }
    }
    std::cout << std::endl;

    if (!check) {
        std::cout << "NO" << std::endl;
    }
}

int main() {
    int n;
    std::cout << "Enter a number of elements of array: ";
    std::cin >> n;

    int* a = new int[n];
    std::cout << "Enter elements of array: ";
    for (size_t i{0}; i < n; i++) {
        std::cin >> a[i];
    }

    Narcissistic(a, n);

    delete[] a;
    return 0;
}
