#include <iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int** data;

public:
    Matrix(int r, int c) : rows(r), cols(c) {
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[cols];
        }
    }

    ~Matrix() {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }

    void setElement(int r, int c, int value) {
        if (r >= 0 && r < rows && c >= 0 && c < cols) {
            data[r][c] = value;
        }
    }

    int getElement(int r, int c) const {
        if (r >= 0 && r < rows && c >= 0 && c < cols) {
            return data[r][c];
        }
        return -1; // Error value
    }

    Matrix operator*(const Matrix& other) const {
        if (cols != other.rows) {
            throw "Matrix dimensions do not match for multiplication.";
        }

        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                result.data[i][j] = 0;
                for (int k = 0; k < cols; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }

    void display() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int rows1, cols1, rows2, cols2;

    cout << "Enter rows and columns for first matrix: ";
    cin >> rows1 >> cols1;
    Matrix mat1(rows1, cols1);

    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            int value;
            cin >> value;
            mat1.setElement(i, j, value);
        }
    }

    cout << "Enter rows and columns for second matrix: ";
    cin >> rows2 >> cols2;
    Matrix mat2(rows2, cols2);

    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j) {
            int value;
            cin >> value;
            mat2.setElement(i, j, value);
        }
    }

    try {
        Matrix result = mat1 * mat2;
        cout << "Result of matrix multiplication:" << endl;
        result.display();
    } catch (const char* msg) {
        cout << msg << endl;
    }

    return 0;
}

