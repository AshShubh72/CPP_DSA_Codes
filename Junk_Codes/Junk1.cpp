#include<bits/stdc++.h>

using namespace std;

int main(){

  int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        int digit=n%10;
        sum+=digit;
        n=n/10;
    }
    cout<<sum;

int sum = 0;
while(n > 0){
    int d = n % 10;
    sum += d;
    n /= 10;
}


//Recursion one

int digitsumrec(int n){
    if(n == 0)return 0;
    int s = digitsumrec(n/10);
    return s+n%10;
}

}