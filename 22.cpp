#include <iostream>
using namespace std;

class Matrix {
private:
    int rows;
    int cols;
    int **matrix;

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

    // Function to insert elements into the matrix
    void insertElements() {
        cout << "Enter elements for the matrix (" << rows << "x" << cols << "):\n";
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cin >> matrix[i][j];
            }
        }
    }

    // Function to retrieve and display elements of the matrix
    void displayElements() const {
        cout << "Matrix:\n";
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int rows, cols;
    
    cout << "Enter the number of rows and columns for the matrix: ";
    cin >> rows >> cols;
    
    Matrix mat(rows, cols);
    
    mat.insertElements();
    mat.displayElements();
    
    return 0;
}
