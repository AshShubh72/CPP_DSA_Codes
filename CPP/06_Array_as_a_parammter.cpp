#include <iostream>
using namespace std;

int* createArray(int size) {
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
    return arr;
}

int main() {
    int sz = 6;
    int* ptr = createArray(sz);

    for (int i = 0; i < sz; i++) {
        cout << ptr[i] << endl;
    }

    delete[] ptr; // free the allocated memory
    return 0;
}
