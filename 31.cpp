#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns (must be same for square matrix): ";
    cin >> rows >> cols;

    if (rows != cols) {
        cout << "Not a square matrix!" << endl;
        return 1;
    }

    int matrix[rows][cols];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    int primarySum = 0, secondarySum = 0;
    for (int i = 0; i < rows; ++i) {
        primarySum += matrix[i][i];
        secondarySum += matrix[i][rows - i - 1];
    }

    cout << "Sum of primary diagonal: " << primarySum << endl;
    cout << "Sum of secondary diagonal: " << secondarySum << endl;

    return 0;
}

