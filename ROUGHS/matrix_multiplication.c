#include <stdio.h>

#define N 2000 // Define the size of the matrix

// Function to multiply two matrices
void multiplyMatrices(int firstMatrix[][N], int secondMatrix[][N], int result[][N]) {
    // Initializing elements of matrix mult to 0.
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            result[i][j] = 0;
        }
    }

    // Multiplying firstMatrix and secondMatrix and storing in result.
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            for(int k = 0; k < N; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

// Function to display the matrix.
void displayMatrix(int matrix[][N]) {
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int firstMatrix[N][N] = {{1,2,7,8,1,2,7,8,1,2,7,8,1,2,7,8,1,2,7,8,1,2,7,8}, {3, 4}};
    int secondMatrix[N][N] = {{5, 6}, {7, 8}};
    int result[N][N]; // To store result

    // Function call
    multiplyMatrices(firstMatrix, secondMatrix, result);

    printf("Result of matrix multiplication:\n");
    displayMatrix(result);

    return 0;
}
