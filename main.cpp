#include "Matrix.hpp"

int main() {
    Matrix A({{6, 4}, {8, 3}});
    Matrix B({{1, 2, 3}, {4, 5, 6}});
    Matrix C({{2, 4, 6}, {1, 3, 5}});

    Matrix result = A + (B.scalarMultiply(3) * C.transpose());

    std::cout << "Result (C++):" << std::endl;
    result.print();

    return 0;
}
