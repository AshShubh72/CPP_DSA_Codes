#include <iostream>
using namespace std;

// Function declarations (prototypes)
void funcA(int n);
void funcB(int n);

void funcA(int n) {
    if (n > 0) {
        cout << "A: " << n << endl;
        funcB(n - 1);  // Call funcB from funcA
    }
}

void funcB(int n) {
    if (n > 1) {
        cout << "B: " << n << endl;
        funcA(n / 2);  // Call funcA from funcB
    }
}

int main() {
    int num = 20;
    funcA(num);
    return 0;
}
