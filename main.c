#include <stdio.h>
#include "matrix.h"

int main() {
    int A[2][2] = {{6, 4}, {8, 3}};
    int B[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int C[2][3] = {{2, 4, 6}, {1, 3, 5}};

    int B_scaled[2][3];
    scalarMultiply(2, 3, B, 3, B_scaled);

    int C_T[3][2];
    transpose(2, 3, C, C_T);

    int mult[2][2];
    multiplyMatrices(2, 3, B_scaled, 3, 2, C_T, mult);

    int result[2][2];
    addMatrices(2, 2, A, mult, result);

    printf("Result (C):\n");
    printMatrix(2, 2, result);

    return 0;
}
