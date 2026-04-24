#include <iostream>
using namespace std;

int main() {
    double numerator, denominator, result;

    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    try {
        if (denominator == 0)
            throw denominator;

        result = numerator / denominator;

        cout << numerator << " / " << denominator << " = " << result << endl;
    }
    catch (double) {
        cout << "Error: Cannot divide by zero!" << endl;
    }

    return 0;
}