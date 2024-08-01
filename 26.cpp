#include <iostream>
using namespace std;

void deleteElement(int arr[], int& size, int position) {
    if (position >= size || position < 0) {
        cout << "Invalid position!" << endl;
        return;
    }

    for (int i = position; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    --size;
}

int main() {
    int arr[100], size, position;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the position of the element to delete: ";
    cin >> position;

    deleteElement(arr, size, position);

    cout << "Array after deletion: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
   

