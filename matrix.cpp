#include "Matrix.hpp"

Matrix::Matrix(int rows, int cols) : data(rows, std::vector<int>(cols)) {}

Matrix::Matrix(std::vector<std::vector<int>> values) : data(values) {}

int Matrix::rows() const {
    return data.size();
}

int Matrix::cols() const {
    return data[0].size();
}

Matrix Matrix::operator+(const Matrix& other) const {
    Matrix result(rows(), cols());
    for (int i = 0; i < rows(); ++i)
        for (int j = 0; j < cols(); ++j)
            result.data[i][j] = data[i][j] + other.data[i][j];
    return result;
}

Matrix Matrix::operator*(const Matrix& other) const {
    Matrix result(rows(), other.cols());
    for (int i = 0; i < rows(); ++i)
        for (int j = 0; j < other.cols(); ++j)
            for (int k = 0; k < cols(); ++k)
                result.data[i][j] += data[i][k] * other.data[k][j];
    return result;
}

Matrix Matrix::transpose() const {
    Matrix result(cols(), rows());
    for (int i = 0; i < rows(); ++i)
        for (int j = 0; j < cols(); ++j)
            result.data[j][i] = data[i][j];
    return result;
}

Matrix Matrix::scalarMultiply(int scalar) const {
    Matrix result(rows(), cols());
    for (int i = 0; i < rows(); ++i)
        for (int j = 0; j < cols(); ++j)
            result.data[i][j] = data[i][j] * scalar;
    return result;
}

void Matrix::print() const {
    for (const auto& row : data) {
        for (int val : row) std::cout << val << " ";
        std::cout << std::endl;
    }
}
