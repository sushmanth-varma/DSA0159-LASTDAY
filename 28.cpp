#include <iostream>
using namespace std;

class Sample {
private:
    int data;

public:
    Sample(int d) : data(d) {}

    void display() const {
        cout << "Data: " << data << endl;
    }
};

int main() {
    Sample* ptr = new Sample(100);
    ptr->display();
    delete ptr;

    return 0;
}

