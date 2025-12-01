#include <iostream>
using namespace std;

class Array {
private:
    int *A;
    int size;
    int length;

public:
    Array(int s) {
        size = s;
        A = new int[size];
        length = 0;
    }

    void create() {
        cout << "Enter number of elements (<= " << size << "): ";
        cin >> length;

        if (length > size) {
            cout << "Too many elements! Setting length = " << size << endl;
            length = size;
        }

        cout << "Enter " << length << " elements: ";
        for (int i = 0; i < length; i++) {
            cin >> A[i];
        }
    }

    void display() const {
        for (int i = 0; i < length; i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }

    bool isSorted() const {
        for (int i = 0; i < length - 1; i++) {
            if (A[i] > A[i + 1])
                return false;
        }
        return true;
    }

    // If not sorted → sort it
    void correctArray() {
        if (isSorted()) {
            cout << "Array is already sorted.\n";
            return;
        }

        // Simple bubble sort (or any sort)
        for (int i = 0; i < length - 1; i++) {
            for (int j = 0; j < length - i - 1; j++) {
                if (A[j] > A[j + 1]) {
                    int temp = A[j];
                    A[j] = A[j + 1];
                    A[j + 1] = temp;
                }
            }
        }
        cout << "Array was not sorted — corrected successfully.\n";
    }

    ~Array() {
        delete[] A;
    }
};

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    Array arr(size);

    arr.create();

    cout << "Original array: ";
    arr.display();

    arr.correctArray();

    cout << "Final array: ";
    arr.display();

    return 0;
}
