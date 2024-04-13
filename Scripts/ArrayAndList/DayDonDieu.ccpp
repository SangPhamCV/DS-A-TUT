#include <iostream>

bool dayDonDieu(const int* a, size_t n) {
    bool dayTang{true};
    bool dayGiam{true};
    for (size_t i{0}; i < n - 1; i++) {
        if (a[i] >= a[i + 1]) {
            dayGiam = false;
        }
        if (a[i] <= a[i + 1]) {
            dayTang = false;
        }
    }
  
    if (dayTang || dayGiam) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n;
    std::cout << "Enter a number of elements of array: ";
    std::cin >> n;
  
    int* a = new int[n];
    std::cout << "Enter elements of aray: ";
    for (size_t i{0}; i < n; i++) {
        std::cin >> a[i];
    }
  
    bool result = dayDonDieu(a, n);
    std::cout << "Result: " << std::boolalpha << result << std::endl;
    
    delete[] a;
    
    return 0;
}
