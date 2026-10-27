
#include <iostream>
using namespace std;

int main()
{
    int marks = 75;

    // Reference: another name for the same variable
    int &ref = marks;

    cout << "Original marks: " << marks << endl;

    ref = 85;
    cout << "After changing through reference: " << marks << endl;

    // Pointer: stores the address of the variable
    int *ptr = &marks;

    cout << "Address stored in pointer: " << ptr << endl;
    cout << "Value accessed using pointer: " << *ptr << endl;

    *ptr = 95;
    cout << "After changing through pointer: " << marks << endl;

    return 0;
}
