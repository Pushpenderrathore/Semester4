#include <iostream>
using namespace std;

class Mammal {
public:
    Mammal() {
        cout << "Mammals can give birth." << endl;
    }
};

class WingedAnimal {
public:
    WingedAnimal() {
        cout << "Winged animals can fly." << endl;
    }
};

class Bat : public Mammal, public WingedAnimal {
};

int main() {
    Bat b1;

    return 0;
}