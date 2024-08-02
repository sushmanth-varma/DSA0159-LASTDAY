#include <iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int** matrix;

public:
    // Constructor
    Matrix(int r, int c) : rows(r), cols(c) {
        matrix = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            matrix[i] = new int[cols];
        }
    }

    // Destructor
    ~Matrix() {
        for (int i = 0; i < rows; ++i) {
            delete[] matrix[i];
        }
        delete[] matrix;
    }

    // Function to input matrix elements
    void inputElements() {
        cout << "Enter matrix elements:\n";
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cin >> matrix[i][j];
            }
        }
    }

    // Overload the * operator to multiply two matrices
    Matrix operator*(const Matrix &m) const {
        if (cols != m.rows) {
            cout << "Matrix multiplication not possible!" << endl;
            return Matrix(0, 0);
        }

        Matrix result(rows, m.cols);

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < m.cols; ++j) {
                result.matrix[i][j] = 0;
                for (int k = 0; k < cols; ++k) {
                    result.matrix[i][j] += matrix[i][k] * m.matrix[k][j];
                }
            }
        }

        return result;
    }

    // Function to display matrix elements
    void display() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int r1, c1, r2, c2;

    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication not possible!" << endl;
        return 0;
    }

    Matrix mat1(r1, c1);
    Matrix mat2(r2, c2);

    cout << "Enter elements of first matrix:\n";
    mat1.inputElements();
    cout << "Enter elements of second matrix:\n";
    mat2.inputElements();

    Matrix result = mat1 * mat2;

    cout << "Resultant matrix after multiplication:\n";
    result.display();

    return 0;
}
