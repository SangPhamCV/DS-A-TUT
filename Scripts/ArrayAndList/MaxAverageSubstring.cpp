#include <iostream>
#include <vector>
#include <string>
#include <sstream>

std::vector<int> splitArray() {
    std::vector<int> arr;
    std::string input;
    
    std::cout << "Nh?p các s? nguyên, phân tách b?ng d?u cách (nh?n Enter d? k?t thúc):\n";
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
    std::cout << "Nh?p d? dài m?ng con: ";
    std::cin >> k;
    
    double result = findMaxAverage(arr, k);
    std::cout << "Giá tr? trung bình l?n nh?t c?a các m?ng con: " << result << std::endl;
    
    return 0;
}
