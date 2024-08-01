#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student(string n, int a) : name(n), age(a) {
        cout << "Student object created." << endl;
    }

    ~Student() {
        cout << "Student object destroyed." << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s("John Doe", 20);
    s.display();

    return 0;
}

