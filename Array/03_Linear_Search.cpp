#include<bits/stdc++.h>
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
                cout << "element " << i + 1 << ": ";
                cin>>A[i];
            }
        }

        int LinearSearch(int key){
            for(int i =0; i<length; i++){
                if(A[i] == key){
                    return i;
                }
            }
        }
        void Display(){
            for(int i=0;i<length;i++){
                cout<<A[i]<<" ";
            }
            cout<<endl;
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
    int key;
    cout<<"Enter element to be searched: ";
    cin>>key;
    int index = arr.LinearSearch(key);
    if(index != -1){
        cout<<"Element found at index: "<<index<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}

