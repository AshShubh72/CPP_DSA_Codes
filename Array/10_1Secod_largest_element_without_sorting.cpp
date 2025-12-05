#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
     vector <int > V(n);

     for(int i = 0; i < n; i++){
        cin >> V[i];
     }

     int  Largest = V[0];   //largest = INT_MIN;
     for(int i = 1; i < n; i++){
        if(V[i] > Largest){
            Largest = V[i];
        }
     }

        int Second_Largest = -1;
        for(int i=0; i < n; i++){
            if(V[i] > Second_Largest && V[i] != Largest){
                Second_Largest = V[i];
            }
        }

        cout << " Second Largest Element is : " << Second_Largest << endl;
    return 0;

}