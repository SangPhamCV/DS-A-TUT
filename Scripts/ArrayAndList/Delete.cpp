#include <iostream>

int main() {
	int n;
	std::cin >> n;
	int* a = new int[n];
	for (int i{0}; i < n; i++) {
		a[i] = i + 1;
	}
	
	int k;
	std::cin >> k;
	while(k >= n || k < 0) {
		std::cin >> k;
	}
	
	for (int i{k}; i < n; i++) {
		a[i] = a[i + 1];
	}
	n--;
	
	for (size_t i{0}; i < n; i++) {
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
	delete[] a;
	return 0;
}