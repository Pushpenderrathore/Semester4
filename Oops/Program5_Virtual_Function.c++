#include <iostream>
using namespace std;

class Base {
public:
    virtual void print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
public:
    void print() override {
        cout << "Derived Function" << endl;
    }
};

int main() {
    Derived derived;
    Base* base1 = &derived;

    base1->print();

    return 0;
}