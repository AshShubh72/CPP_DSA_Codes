#include <iostream>
using namespace std;

class Array {
private:
    int A[10];
    int size;
    int length;

    void swapElements(int *x, int *y) {
        int t = *x;
        *x = *y;
        *y = t;
    }

public:
    // Constructor to initialize like your struct literal
    Array(int arr[], int s, int l) {
        size = s;
        length = l;
        for (int i = 0; i < length; i++) {
            A[i] = arr[i];
        }
    }

    void display() {
        for (int i = 0; i < length; i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }

    // Separate negatives to left, positives to right
    void neg() {
        int i = 0;
        int j = length - 1;

        while (i < j) {
            while (A[i] < 0) i++;
            while (A[j] > 0) j--;
            if (i < j) {
                swapElements(&A[i], &A[j]);
            }
        }
    }
};

int main() {
    int init[] = { -1, 2, -3, 4, -5, 8, -10 };

    Array arr(init, 10, 7);   // same as: {{-1,2,-3,4,-5,8,-10},10,7};

    arr.neg();
    arr.display();

    return 0;
}
