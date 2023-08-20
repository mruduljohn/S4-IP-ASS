#include <fstream>
#include <iostream>
using namespace std;

class Product {
public:
    string name;
    double price;
};

int main() {
    Product p1;
    p1.name = "Encylopedia";
    p1.price = 350.00;

    ofstream output_file("products.bin", ios::binary);

    // Write the object to the file
    output_file.write((char*)&p1, sizeof(Product));

    // Close the file
    output_file.close();

    // Open the file for reading
    ifstream input_file("products.bin", ios::binary);

    // Read the object from the file
    input_file.read((char*)&p1, sizeof(Product));

    // Print the values of the object
    cout << "Name: " << p1.name << endl;
    cout << "Price: " << p1.price << endl;

    // Close the file
    input_file.close();

    return 0;
}