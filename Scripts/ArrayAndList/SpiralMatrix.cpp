#include <iostream>

void spiralMatrix(int** matrix, int& n) {
    int value {1};
    int top {0}, bottom {n-1}, left {0}, right {n-1};
    
    while (value <= n * n) {
        for (int i = left; i <= right; i++) {
            matrix[top][i] = value++;
        }
        top++;
        
        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = value++;
        }
        right--;
        
        for (int i = right; i >= left; i--) {
            matrix[bottom][i] = value++;
        }
        bottom--;
        
        for (int i = bottom; i >= top; i--) {
            matrix[i][left] = value++;
        }
        left++;
    }
}

void printMatrix(int** matrix, size_t n) {
    std::cout << "Result: " << std::endl;
    for (size_t i{0}; i < n; i++) {
        for (size_t j{0}; j < n; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cout << "Enter a size of square matrix: ";
    std::cin >> n;
    
    int** matrix = new int*[n];
    
    for (size_t i{0}; i < n; i++) {
        matrix[i] = new int[n];
    }
    
    spiralMatrix(matrix, n);
    printMatrix(matrix, n);
    
    for(size_t i{0}; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    
    return 0;
}