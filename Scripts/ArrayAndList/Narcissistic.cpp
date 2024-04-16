#include <iostream>

void Narcissistic(const int* a, size_t n) {
    for (size_t i{0}; i < n; i++) {
        int numberOfDigits = 0;
        int temp = a[i];
        int original = temp;
        
        while (temp != 0) {
            temp /= 10;
            numberOfDigits++;
        }

        temp = a[i];
        int sum = 0;
        while (temp != 0) {
            int digit = temp % 10;
            int power = 1;
            for (int j = 0; j < numberOfDigits; j++) {
                power *= digit;
            }
            sum += power;
            temp /= 10;
        }

        if (sum == original) {
            std::cout << sum << std::endl;
        }
    }
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;
    int* a = new int[n];
    std::cout << "Enter the elements of the array: ";
    for (size_t i{0}; i < n; i++) {
        std::cin >> a[i];
    }
    Narcissistic(a, n);

    delete[] a;
    return 0;
}
