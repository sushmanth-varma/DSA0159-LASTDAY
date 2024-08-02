#include <iostream>
using namespace std;

int main() {
    const int totalSubjects = 4;
    double marks[totalSubjects];
    double total = 0;

    cout << "Enter the marks for " << totalSubjects << " subjects: ";
    for (int i = 0; i < totalSubjects; ++i) {
        cin >> marks[i];
        total += marks[i];
    }

    double aggregate = total / totalSubjects;

    cout << "Total Marks: " << total << endl;
    cout << "Aggregate: " << aggregate << "%" << endl;

    cout << "Grade: ";
    if (aggregate > 75) {
        cout << "Distinction" << endl;
    } else if (aggregate >= 60) {
        cout << "First Division" << endl;
    } else if (aggregate >= 50) {
        cout << "Second Division" << endl;
    } else if (aggregate >= 40) {
        cout << "Third Division" << endl;
    } else {
        cout << "Fail" << endl;
    }

    return 0;
}
