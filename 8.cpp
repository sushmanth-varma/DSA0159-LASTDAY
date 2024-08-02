#include <iostream>
#include <vector>
using namespace std;

class Product {
private:
    string name;
    double price;

public:
    // Function to get product details
    void get_product() {
        cout << "Enter product name: ";
        cin >> name;
        cout << "Enter product price: ";
        cin >> price;
    }

    // Function to print product details
    void print_product() const {
        cout << "Product Name: " << name << ", Price: $" << price << endl;
    }
};

int main() {
    int n;

    cout << "Enter the number of products: ";
    cin >> n;

    vector<Product> products(n);
    for (int i = 0; i < n; ++i) {
        cout << "Product " << i + 1 << ":" << endl;
        products[i].get_product();
    }

    cout << "\nProduct Details:\n";
    for (int i = 0; i < n; ++i) {
        products[i].print_product();
    }

    return 0;
}
