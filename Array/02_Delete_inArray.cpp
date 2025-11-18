#include<iostream>
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
        void Delete(int index){
            if(index >=0 && index < length){
                for(int i =index;i<length-1;i++){
                    A[i] = A[i+1];
                }
                length--;
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
    arr.Delete(2);
    arr.Display();
    return 0;
}
