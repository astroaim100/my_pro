#include <iostream>
using namespace std;

class complex {
    float real; // Real part
    float imag; // Imaginary part

public:
    // Default constructor
    complex() : real(0), imag(0) {}

    // Parameterized constructor
    complex(float a, float b) : real(a), imag(b) {}

    // Addition operator
    complex operator+(const complex& c) {
        complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    // Multiplication operator
    complex operator*(const complex& c) {
        complex temp;
        temp.real = (real * c.real) - (imag * c.imag);
        temp.imag = (imag * c.real) + (real * c.imag);
        return temp;
    }

    // Friend functions for input and output
    friend ostream& operator<<(ostream& out, const complex& c);
    friend istream& operator>>(istream& in, complex& c);
};

// Output operator overload
ostream& operator<<(ostream& out, const complex& c) {
    out << c.real << " + " << c.imag << "i";
    return out;
}

// Input operator overload
istream& operator>>(istream& in, complex& c) {
    cout << "Enter real part: ";
    in >> c.real;
    cout << "Enter imaginary part: ";
    in >> c.imag;
    return in;
}

int main() {
    complex c1, c2, c3;

    // Input for first complex number
    cout << "Enter the 1st complex number\n";
    cin >> c1;

    // Input for second complex number
    cout << "\nEnter the 2nd complex number\n";
    cin >> c2;

    // Display the first complex number
    cout << "\nThe first complex number is: ";
    cout << c1 << endl;

    // Display the second complex number
    cout << "\nThe second complex number is: ";
    cout << c2 << endl;

    // Perform addition
    c3 = c1 + c2;
    cout << "\nAddition of complex numbers: ";
    cout << c3 << endl;

    // Perform multiplication
    c3 = c1 * c2;
    cout << "\nMultiplication of complex numbers: ";
    cout << c3 << endl;

    return 0;
}