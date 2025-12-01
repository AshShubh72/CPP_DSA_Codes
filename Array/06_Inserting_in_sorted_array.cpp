#include <iostream>
using namespace std;

class Array {
private:
    int A[50];
    int size;
    int length;

public:
    Array(int s) {
        size = s;
        length = 0;
    }

    void create() {
        cout << "Enter number of elements: ";
        cin >> length;

        cout << "Enter " << length << " sorted elements: ";
        for (int i = 0; i < length; i++) {
            cin >> A[i];
        }
    }

    void display() {
        for (int i = 0; i < length; i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }

    void insert(int x) {
        if (length >= size) {
            cout << "Array is full, cannot insert.\n";
            return;
        }

        int i = length - 1;

        // Move elements to maintain sorted order
        while (i >= 0 && A[i] > x) {
            A[i + 1] = A[i];
            i--;
        }

        A[i + 1] = x;
        length++;
    }
};

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    Array arr(size);

    arr.create();

    int x;
    cout << "Enter element to insert: ";
    cin >> x;

    arr.insert(x);

    cout << "Array after insertion: ";
    arr.display();

    return 0;
}
