// #include <iostream>
// using namespace std;

// int func(int n) {
//     static int count = 0;
//     if (n > 0) {
//         count++;
//         return func(n - 1) + count;
//     } else {
//         return 0;
//     }
// }

// int main() {
//     int num = 5;
//     cout << "The result is: " << func(num) << endl;
//     return 0;
// }


#include <iostream>
using namespace std;

int func(int n) {
    int count = 0;
    if (n > 0) {
        count++;
        return func(n - 1) + count;
    } else {
        return 0;
    }
}

int main() {
    int num = 5;
    cout << "The result is: " << func(num) << endl;
    return 0;
}
 