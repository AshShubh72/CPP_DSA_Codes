#include <iostream>

using namespace std;

struct reportcard{
    string name;
    int rollno;
    int marks;
};

int main(){
    struct reportcard R[3];

    for (int i=0; i < 3; i++){
        cout << "Enter name, roll number and marks of student " << i+1 << ": ";
        cin >> R[i].name >> R[i].rollno >> R[i].marks;
    }

    cout << "\nReport Card:\n";
    for (int i=0; i < 3; i++){
        cout << "Name: " << R[i].name << ", Roll No: " << R[i].rollno << ", Marks: " << R[i].marks << endl;
    }
    return 0;



}