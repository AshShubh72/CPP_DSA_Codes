#include <bits/stdc++.h>
using namespace std;


class Array{
    private:
        int *A;
        int Size;
        int length;
    public:
        Array(int Size){
            this->Size = Size;
            A = new int[Size];
        }



        void CreateArray(){
            cout<<"Enter number of elements: ";
            cin>>length;
            cout<<"Enter all elements: ";
            for(int i=0;i<length;i++){
                cin>>A[i];
            }
        }


        void Display(){
            for(int i=0;i<length;i++){
                cout<<A[i]<<" ";
            }
            cout<<endl;
        }

        void Append(int x){
            if(length < Size){
                A[length] = x;
                length++;
            }
        }


        void Insert(int index, int x){
            if(index >= 0 && index <= Size){
                for(int i =length;i>index;i--){
                    A[i] = A[i-1];
                }
                A[index] = x;
                length++;
            }
        }

        ~Array(){
            cout<<"Destructor called"<<endl;
            delete []A;
        }

};

int main(){
    Array arr(10);
    arr.CreateArray();
    arr.Display();
    arr.Append(15);
    arr.Display();
    arr.Insert(2, 20);
    arr.Display();
    return 0;
}