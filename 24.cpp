#include <iostream>
using namespace std;

// Base class
class Employee {
protected:
    string name;
    int id;
    double salary;

public:
    Employee(string n, int i, double s) : name(n), id(i), salary(s) {}

    // Getter functions
    string getName() const { return name; }
    int getId() const { return id; }
    double getSalary() const { return salary; }

    // Setter functions
    void setName(string n) { name = n; }
    void setId(int i) { id = i; }
    void setSalary(double s) { salary = s; }

    // Display function
    virtual void display() const {
        cout << "Name: " << name << ", ID: " << id << ", Salary: $" << salary << endl;
    }
};

// Derived Manager class
class Manager : public Employee {
private:
    string department;
    double bonus;

public:
    Manager(string n, int i, double s, string d, double b)
        : Employee(n, i, s), department(d), bonus(b) {}

    // Getter functions
    string getDepartment() const { return department; }
    double getBonus() const { return bonus; }

    // Setter functions
    void setDepartment(string d) { department = d; }
    void setBonus(double b) { bonus = b; }

    // Display function
    void display() const override {
        Employee::display();
        cout << "Department: " << department << ", Bonus: $" << bonus << endl;
    }
};

// Derived Engineer class
class Engineer : public Employee {
private:
    string specialty;
    int hours;

public:
    Engineer(string n, int i, double s, string sp, int h)
        : Employee(n, i, s), specialty(sp), hours(h) {}

    // Getter functions
    string getSpecialty() const { return specialty; }
    int getHours() const { return hours; }

    // Setter functions
    void setSpecialty(string sp) { specialty = sp; }
    void setHours(int h) { hours = h; }

    // Display function
    void display() const override {
        Employee::display();
        cout << "Specialty: " << specialty << ", Hours: " << hours << endl;
    }
};

int main() {
    Manager manager("Alice", 1001, 75000.0, "HR", 5000.0);
    Engineer engineer("Bob", 1002, 65000.0, "Software", 40);

    cout << "Manager Details:" << endl;
    manager.display();

    cout << "\nEngineer Details:" << endl;
    engineer.display();

    return 0;
}
