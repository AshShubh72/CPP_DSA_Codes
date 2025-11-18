#include <iostream>
using namespace std;

int main() {
    int x = 42;
    int &ref = x; // ref is a reference to x

    cout << "Value of x: " << x << endl;
    cout << "Value of ref: " << ref << endl;

    ref = 100; // Modifying ref will modify x

    cout << "After modifying ref:" << endl;
    cout << "Value of x: " << x << endl;
    cout << "Value of ref: " << ref << endl;

    return 0;
}