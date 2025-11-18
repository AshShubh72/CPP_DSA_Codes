#include <iostream>
using namespace std;

class Array {
private:
    int A[100];
    int size;
    int length;

public:
    Array(int s) {
        size = s;
        length = 0;
    }

    void CreateArray() {
        cout << "Enter number of elements: ";
        cin >> length;

        cout << "Enter " << length << " elements: ";
        for(int i = 0; i < length; i++) {
            cin >> A[i];
        }
    }

    void Display() {
        for(int i = 0; i < length; i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }

    void swapValues(int &x, int &y) {
        int temp = x;
        x = y;
        y = temp;
    }

    int LinearSearch(int value) {
        for(int i = 0; i < length; i++) {
            if(A[i] == value) {

                // Move found value one step forward (transposition)
                if(i > 0)
                    swapValues(A[i], A[i-1]);

                return i;
            }
        }
        return -1;
    }
};

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    Array arr(size);

    arr.CreateArray();

    int value;
    cout << "Enter value to search: ";
    cin >> value;

    int index = arr.LinearSearch(value);

    cout << "Found at index: " << index << endl;

    cout << "Array after search (transposition): ";
    arr.Display();

    return 0;
}
