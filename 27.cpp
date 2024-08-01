#include <iostream>
#include <cstring>
using namespace std;

string concatenate(const string& str1, const string& str2) {
    return str1 + str2;
}

char* concatenate(const char* arr1, const char* arr2) {
    char* result = new char[strlen(arr1) + strlen(arr2) + 1];
    strcpy(result, arr1);
    strcat(result, arr2);
    return result;
}

int main() {
    string str1 = "Hello, ", str2 = "world!";
    char arr1[] = "Good ", arr2[] = "morning";

    cout << "Concatenated strings: " << concatenate(str1, str2) << endl;

    char* concatenatedArrays = concatenate(arr1, arr2);
    cout << "Concatenated character arrays: " << concatenatedArrays << endl;
    delete[] concatenatedArrays;

    return 0;
}

