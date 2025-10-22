#include <iostream>
using namespace std;
sruct Rectangle{
    int lengthl
    int breadth;
};

int main(){
    Rectangle r{10, 15};
    //using normal variable
    cout << "length:" << r.length << endl;
    cout << "breadth:" << r.breadth << endl;

    //using pointer to structure
    Rectangle *p = &r;
    cout << " length using pointer:" << p->length << endl;
    cout << " breadth using pointer:" << p->breadth << endl;
    return 0;

    // Arrow operator (->) is used to access members of structure using pointer

    // using heap memory allocation
    Rectangle *ptr;
    ptr = new Rectangle{20, 25};
    cout << " length using pointer with heap memory:" << ptr->length << endl;
    cout << " breadth using pointer with heap memory:" << ptr->breadth << endl;
    delete ptr; // free the allocated memory
    return 0;
}

// its not neccessary to write struct while declaring structure variable or pointer to structure variable in C++
// but if we use typedef while declaring structure then its mandatory to use typedef name while declaring structure variable or pointer to structure variable.
