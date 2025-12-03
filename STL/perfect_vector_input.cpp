#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;                    // number of elements

    vector<int> v(n);            // create vector of size n

    // input one-by-one (like user defined array)
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // display elements
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
