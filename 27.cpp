#include <iostream>
#include <cstring>
using namespace std;

// Overloaded function to concatenate two strings
string concatenate(const string &str1, const string &str2) {
    return str1 + str2;
}

// Overloaded function to concatenate two character arrays
char* concatenate(const char* str1, const char* str2) {
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    char* result = new char[len1 + len2 + 1];

    strcpy(result, str1);
    strcat(result, str2);

    return result;
}

int main() {
    string str1 = "Hello";
    string str2 = "World";

    cout << "Concatenated strings: " << concatenate(str1, str2) << endl;

    const char* charArray1 = "Good";
    const char* charArray2 = "Morning";

    char* concatenatedArray = concatenate(charArray1, charArray2);
    cout << "Concatenated character arrays: " << concatenatedArray << endl;

    delete[] concatenatedArray; // Free the dynamically allocated memory

    return 0;
}
