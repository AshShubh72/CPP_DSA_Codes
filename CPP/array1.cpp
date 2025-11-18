#include <iostream>
using namespace std;

int main() {
    int n;

    // Taking size of array
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n]; // declare array of size n

    // Taking input in array
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Displaying array elements
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
