#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the square matrix: ";
    cin >> n;

    int matrix[n][n];

    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    int mainDiagonalSum = 0, secondaryDiagonalSum = 0;

    for (int i = 0; i < n; ++i) {
        mainDiagonalSum += matrix[i][i];
        secondaryDiagonalSum += matrix[i][n - 1 - i];
    }

    cout << "Sum of main diagonal: " << mainDiagonalSum << endl;
    cout << "Sum of secondary diagonal: " << secondaryDiagonalSum << endl;

    return 0;
}
