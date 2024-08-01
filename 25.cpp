#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    int id;
    double salary;

public:
    Employee(string n, int i, double s) : name(n), id(i), salary(s) {}

    virtual void display() const {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Manager : public Employee {
private:
    string department;
    double bonus;

public:
    Manager(string n, int i, double s, string d, double b)
        : Employee(n, i, s), department(d), bonus(b) {}

    void display() const override {
        Employee::display();
        cout << "Department: " << department << endl;
        cout << "Bonus: " << bonus << endl;
    }
};

class Engineer : public Employee {
private:
    string specialty;
    int hours;

public:
    Engineer(string n, int i, double s, string sp, int h)
        : Employee(n, i, s), specialty(sp), hours(h) {}

    void display() const override {
        Employee

