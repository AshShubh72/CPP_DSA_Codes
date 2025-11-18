#include <iostream>
void printValue(const int& x) {
    std::cout << "Value: " << x << std::endl;
}

int main() {
    int a = 10;
    printValue(a);
    std::cout << "After function: a = " << a << std::endl;
    return 0;

    
}