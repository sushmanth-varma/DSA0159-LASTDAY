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

    void insertElement(int r, int c, int value) {
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
    Matrix mat(3, 3);

    // Inserting elements
    mat.insertElement(0, 0, 1);
    mat.insertElement(0, 1, 2);
    mat.insertElement(0, 2, 3);
    mat.insertElement(1, 0, 4);
    mat.insertElement(1, 1, 5);
    mat.insertElement(1, 2, 6);
    mat.insertElement(2, 0, 7);
    mat.insertElement(2, 1, 8);
    mat.insertElement(2, 2, 9);

    // Displaying matrix
    cout << "Matrix:" << endl;
    mat.display();

    return 0;
}

