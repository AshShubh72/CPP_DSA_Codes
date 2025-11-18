#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n == 0)
        return 0;
    else
        return sum(n-1) + n;
}

int lsum(int n){
    int i, s=0;
    
    for(i = 0;i<=n;i++){
        s = s + i;
    }
    return s;
    
}

int main(){
    int n = 5;
    int a = sum(n);
    
    cout << a << endl;
    
    int b = lsum(n);
    cout << b << endl;
    
    return 0;
}