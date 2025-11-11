#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int fib(int n) {
        if (n <= 1)
            return n;
        return fib(n - 1) + fib(n - 2);
    }
};

// main must be at global scope, create an instance of Solution and call fib
int main(){
    int n;
    if (!(cin >> n)) return 0;
    Solution s;
    int a = s.fib(n);
    cout << a << '\n';
    return 0;
}