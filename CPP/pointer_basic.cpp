#include <iostream>

using namespace std;

int main(){
    int a = 10;
    int *p = &a;
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value of p (address of a): " << p << endl;
    cout << "Value pointed to by p: " << *p << endl;

    return 0;
    
}
