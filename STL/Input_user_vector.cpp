#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;              // number of elements

    vector<int> v;         // empty vector
    v.reserve(n);          // (optional) reserve space

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);    // add each element
    }

    // print elements
    for (int x : v) {
        cout << x << " ";
    }
    return 0;
}
