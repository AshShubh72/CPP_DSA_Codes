#include<bits/stdc++.h>

using namespace std;

void swap (int *a, int*b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}

int main(){
    int x = 10;
    int y = 20;

    cout << "Before swap: " << endl;
    cout << "x = " << x << ", y = " << y << endl;

    swap(&x, &y);

    cout << "After swap: " << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}