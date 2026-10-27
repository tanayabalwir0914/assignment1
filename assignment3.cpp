#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:

    // Default Constructor
    Number()
    {
        value = 0;
        cout << "Default Constructor Called." << endl;
    }

    // Parameterized Constructor
    Number(int v)
    {
        value = v;
        cout << "Parameterized Constructor Called." << endl;
    }

    // Operator Overloading (+)
    Number operator+(Number n)
    {
        Number temp;
        temp.value = value + n.value;
        return temp;
    }

    // Member Function
    void display()
    {
        cout << "Value = " << value << endl;
    }
};

int main()
{
    // Parameterized Constructor
    Number n1(10);
    Number n2(20);

    // Operator Overloading
    Number n3 = n1 + n2;

    // Display values
    cout << "\nFirst Number: ";
    n1.display();

    cout << "Second Number: ";
    n2.display();

    cout << "Sum of Two Numbers: ";
    n3.display();

    // Default Constructor
    Number n4;

    cout << "Default Number: ";
    n4.display();

    return 0;
}