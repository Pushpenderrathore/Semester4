#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    // Operator overloading
    Complex operator + (Complex obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void display() {
        if (imag < 0)
            cout << "Output complex number: " << real << imag << "i" << endl;
        else
            cout << "Output complex number: " << real << "+" << imag << "i" << endl;
    }
};

int main() {
    Complex c1(1.0, 2.0), c2(1.0, 3.0);

    Complex result = c1 + c2;

    result.display();

    return 0;
}