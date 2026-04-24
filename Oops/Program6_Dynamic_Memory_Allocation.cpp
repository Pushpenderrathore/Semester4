#include <iostream>
using namespace std;

int main() {

    int* point_int = new int(45);
    float* point_float = new float(45.45);

    cout << *point_int << endl;
    cout << *point_float << endl;

    delete point_int;
    delete point_float;

    return 0;
}