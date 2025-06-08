#include <iostream>
void modifyPointer(int* ptr) {
    if (ptr) {
        *ptr = 100;
        std::cout << "Inside function: *ptr = " << *ptr << std::endl;
    }
}

int main() {
    int a = 10;
    std::cout << "Before function: a = " << a << std::endl;
    modifyPointer(&a);
    std::cout << "After function: a = " << a << std::endl;
    return 0;
}