#include <iostream>
#include <vector>
#include <string>
#include <sstream>

std::vector<int> splitArray() {
    std::vector<int> arr;
    std::string input;
    
    std::cout << "Nh?p c�c s? nguy�n, ph�n t�ch b?ng d?u c�ch (nh?n Enter d? k?t th�c):\n";
    std::getline(std::cin, input);
    std::istringstream iss(input);
   
    int num;
    while (iss >> num) {
        arr.push_back(num);
    }    
    
    return arr;
}

double findMaxAverage(std::vector<int>& nums, size_t k) {
    int sum{0};
    for(size_t i{0}; i < k; i++) {
        sum += nums[i];
    }
    
    double maxAverage = static_cast<double>(sum) / k;
    for (size_t i{k}; i < nums.size(); i++) {
        sum = sum - nums[i - k] + nums[i];
        
        double average = static_cast<double>(sum) / k;
        
        if (maxAverage < average) {
            maxAverage = average;
        }
    }
    
    return maxAverage;
}

int main() {
    std::vector<int> arr = splitArray();
    int k;
    std::cout << "Nh?p d? d�i m?ng con: ";
    std::cin >> k;
    
    double result = findMaxAverage(arr, k);
    std::cout << "Gi� tr? trung b�nh l?n nh?t c?a c�c m?ng con: " << result << std::endl;
    
    return 0;
}
