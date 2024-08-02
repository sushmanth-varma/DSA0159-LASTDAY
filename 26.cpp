#include <iostream>
#include <string>
using namespace std;

// Function to count the number of words in a string
int countWords(const string &str) {
    int count = 0;
    bool inWord = false;

    for (char c : str) {
        if (isspace(c)) {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            count++;
        }
    }

    return count;
}

int main() {
    string text;
    
    cout << "Enter a string: ";
    getline(cin, text);
    
    int wordCount = countWords(text);
    cout << "Number of words: " << wordCount << endl;
    
    return 0;
}
