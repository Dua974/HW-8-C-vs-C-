/* C version */
#ifndef MATRIX_H
#define MATRIX_H

void addMatrices(int rows, int cols, int A[rows][cols], int B[rows][cols], int result[rows][cols]);
void scalarMultiply(int rows, int cols, int A[rows][cols], int scalar, int result[rows][cols]);
void transpose(int rows, int cols, int A[rows][cols], int result[cols][rows]);
void multiplyMatrices(int r1, int c1, int A[r1][c1], int r2, int c2, int B[r2][c2], int result[r1][c2]);
void printMatrix(int rows, int cols, int A[rows][cols]);

#endif

