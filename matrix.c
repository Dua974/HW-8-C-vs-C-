#include <stdio.h>
#include "matrix.h"

void addMatrices(int rows, int cols, int A[rows][cols], int B[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result[i][j] = A[i][j] + B[i][j];
}

void scalarMultiply(int rows, int cols, int A[rows][cols], int scalar, int result[rows][cols]) {
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result[i][j] = A[i][j] * scalar;
}

void transpose(int rows, int cols, int A[rows][cols], int result[cols][rows]) {
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result[j][i] = A[i][j];
}

void multiplyMatrices(int r1, int c1, int A[r1][c1], int r2, int c2, int B[r2][c2], int result[r1][c2]) {
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < c1; ++k)
                result[i][j] += A[i][k] * B[k][j];
        }
}

void printMatrix(int rows, int cols, int A[rows][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            printf("%d ", A[i][j]);
        printf("\n");
    }
}

