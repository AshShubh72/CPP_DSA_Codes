#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    // Default constructor
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }

    // Parameterized constructor
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    // Function to calculate area
    int area()
    {
        return length * breadth;
    }

    // Function to calculate perimeter
    int perimeter()
    {
        return 2 * (length + breadth);
    }

    // Setter functions
    void setLength(int l)
    {
        length = l;
    }  

    void setBreadth(int b)
    {
        breadth = b;
    }

    // Getter functions
    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }

    // Destructor
    ~Rectangle()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    Rectangle r(10, 4);

    cout << "Area = " << r.area() << "  Perimeter = " << r.perimeter() << endl;

    r.setLength(5);
    r.setBreadth(4);

    cout << "Area = " << r.area() << "  Perimeter = " << r.perimeter() << endl;

    cout << "Length = " << r.getLength() << "  Breadth = " << r.getBreadth() << endl;

    return 0;
}
