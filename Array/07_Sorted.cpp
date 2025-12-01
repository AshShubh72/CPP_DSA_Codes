#include <iostream>
using namespace std;

class Array {
private:
    int *A;
    int size;
    int length;

public:
    // Constructor
    Array(int s) {
        size = s;
        A = new int[size];
        length = 0;
    }

    // Take input from user
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

    // Display array
    void display() const {
        for (int i = 0; i < length; i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }

    // Check if array is sorted in ascending order
    bool isSorted() const {
        int i = 0;
        while (i < length - 1) {
            if (A[i] > A[i + 1])
                return false;
            i++;
        }
        return true;
    }

    // Destructor
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

    cout << "Array elements: ";
    arr.display();

    cout << "Is array sorted? " << arr.isSorted() << endl;  // 1 = true, 0 = false

    return 0;
}
