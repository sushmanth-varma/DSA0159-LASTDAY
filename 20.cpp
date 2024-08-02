#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    
    cout << "Enter the number of rows and columns for the matrices: ";
    cin >> rows >> cols;
    
    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];
    
    cout << "Enter elements of the first matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix1[i][j];
        }
    }
    
    cout << "Enter elements of the second matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix2[i][j];
        }
    }
    
    // Add the matrices
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    cout << "Sum of the matrices:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
