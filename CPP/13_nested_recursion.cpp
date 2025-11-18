#include <iostream>

using namespace std;

int func(int n){
    if(n > 100)
        return n - 10;
    else
        return func(func(n + 11));

}

int main(){
    int num = 95;
    cout << "The result is: " << func(num) << endl;
    return 0;
}