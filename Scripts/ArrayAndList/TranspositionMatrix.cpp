#include <iostream>

int** enterMatrix(const int& m, const int& n) {
    int** matrix = new int*[m];
    std::cout << "Enter elements of matrix: \n";
    for (size_t i{0}; i < m; i++) {
        matrix[i] = new int[n];
        for (size_t j{0}; j < n; j++) {
            std::cout << "Enter a element [" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }
    
    return matrix;
}

int** transpositionMatrix(int** matrix, const int& m, const int& n) {
    int** transMatrix = new int*[n];
    for (size_t i{0}; i < n; i++) {
        transMatrix[i] = new int[m];
        for (size_t j{0}; j < m; j++) {
            transMatrix[i][j] = matrix[j][i];
        }
    }
    
    return transMatrix;
}

void printMatrix(int** matrix, const int& m, const int& n) {
    for (size_t i{0}; i < m; i++) {
        for (size_t j{0}; j < n; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void deleteMatrix(int** matrix, size_t row) {
    for (size_t i{0}; i < row; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int main() {
    int m, n;
    std::cout << "Enter a item row number of matrix: ";
    std::cin >> m;

    std::cout << "Enter a item col number of matrix: ";
    std::cin >> n;
    
    int** matrix = enterMatrix(m, n);
    int** transmatrix = transpositionMatrix(matrix, m, n);
    
    std::cout << "Matrix: " << std::endl;
    printMatrix(matrix, m, n);
    printMatrix(transmatrix, n , m);
    
    deleteMatrix(matrix, m);
    deleteMatrix(matrix, n);

    return 0;
}