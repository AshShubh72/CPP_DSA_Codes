#include <iostream>
using namespace std;

struct Array {
    int A[100];
    int size;
    int length;
};

void Display(struct Array arr) {
    for(int i = 0; i < arr.length; i++)
        cout << arr.A[i] << " ";
    cout << endl;
}

int BinarySearch(struct Array arr, int key) {
    int l = 0;
    int h = arr.length - 1;

    while(l <= h) {
        int mid = (l + h) / 2;
        if(key == arr.A[mid])
            return mid;
        else if(arr.A[mid] < key)
            l = mid + 1;
        else
            h = mid - 1;
    }
    return -1;
}

int RBinarySearch(struct Array arr, int key, int l, int h) {
    if(l <= h) {
        int mid = (l + h) / 2;
        if(key == arr.A[mid])
            return mid;
        else if(key < arr.A[mid])
            return RBinarySearch(arr, key, l, mid - 1);
        else
            return RBinarySearch(arr, key, mid + 1, h);
    }
    return -1;
}

int main() {
    Array arr;
    cout << "Enter size of array: ";
    cin >> arr.size;

    cout << "Enter number of elements: ";
    cin >> arr.length;

    cout << "Enter elements (sorted): ";
    for(int i = 0; i < arr.length; i++) {
        cin >> arr.A[i];
    }

    int key;
    cout << "Enter key to search: ";
    cin >> key;

    cout << "Iterative Binary Search result: "
         << BinarySearch(arr, key) << endl;

    cout << "Recursive Binary Search result: "
         << RBinarySearch(arr, key, 0, arr.length - 1) << endl;

    cout << "Array: ";
    Display(arr);

    return 0;
}
