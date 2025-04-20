// File: Matrix.hpp
#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <vector>
#include <iostream>

class Matrix {
private:
    std::vector<std::vector<int>> data;

public:
    Matrix(int rows, int cols);
    Matrix(std::vector<std::vector<int>> values);

    int rows() const;
    int cols() const;

    Matrix operator+(const Matrix& other) const;
    Matrix operator*(const Matrix& other) const;
    Matrix transpose() const;
    Matrix scalarMultiply(int scalar) const;
    void print() const;
};

#endif

