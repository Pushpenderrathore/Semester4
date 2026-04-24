#include <iostream>
using namespace std;

class Wall {
private:
    double length;
    double height;

public:
    // Parameterized constructor
    Wall(double len, double hgt) {
        length = len;
        height = hgt;
    }

    // Copy constructor
    Wall(const Wall &obj) {
        length = obj.length;
        height = obj.height;
    }

    double calculateArea() {
        return length * height;
    }
};

int main() {
    Wall wall1(11, 9);

    // Copy object
    Wall wall2 = wall1;

    cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
    cout << "Area of Wall 2: " << wall2.calculateArea() << endl;

    return 0;
}