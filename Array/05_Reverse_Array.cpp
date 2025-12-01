#include<bits/stdc++.h>
using namespace std;

class Array {
    int *A;
    int size;
    int length;

public:
    Array(int size) {
        this->size = size;
        A = new int[size];
        length = 0;
    }

    void CreateArray() {
        cout << "Enter number of elements: ";
        cin >> length;

        if (length > size) {
            cout << "Too many elements! Max allowed = " << size << endl;
            length = size;
        }

        cout << "Enter elements one by one:\n";
        for (int i = 0; i < length; i++) {
            cout << "Enter element " << (i + 1) << ": ";
            cin >> A[i];
        }
    }

    void Display() {
        for (int i = 0; i < length; i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }

    // Reverse using auxiliary array
    void RUA() {
        int *B = new int[length];
        int i, j;

        for (i = length - 1, j = 0; i >= 0; i--, j++) {
            B[j] = A[i];
        }
        for (i = 0; i < length; i++) {
            A[i] = B[i];
        }
        delete [] B;
    }

    // Reverse using interchanging (swap)
    void IUA() {
        int i, j;
        for (i = 0, j = length - 1; i < j; i++, j--) {
            swap(A[i], A[j]);
        }
    }

    ~Array() {
        delete [] A;
    }
};

int main() {
    Array arr(10);

    arr.CreateArray();
    cout << "Original Array: ";
    arr.Display();

    arr.RUA();
    cout << "After RUA reverse: ";
    arr.Display();

    arr.IUA();
    cout << "After IUA reverse (restored original): ";
    arr.Display();

    return 0;
}
