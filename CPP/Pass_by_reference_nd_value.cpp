#include <iostream>

// Pass by value
int change(int x) {
    x = 20;
    return x;
}

// Pass by reference
void change_ref(int &x) {
    x = 20;
}

// Pass by pointer
void change_ptr(int *x) {
    *x = 30;
}

int main() {
    int a = 10;

    // Using pass by value (does not change original)
    int b = change(a);
    std::cout << "After change (by value): " << a << " (returned: " << b << ")\n";

    // Using pass by reference
    change_ref(a);
    std::cout << "After change_ref (by reference): " << a << std::endl;

    // Using pass by pointer
    change_ptr(&a);
    std::cout << "After change_ptr (by pointer): " << a << std::endl;

    return 0;
}
