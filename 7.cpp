#include <iostream>
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

    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student student1("Alice", 20);
    student1.display();

    return 0;
}
