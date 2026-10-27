
#include <iostream>
#include <string>
using namespace std;

class Student
{
    string name;
    int rollNo;
    float marks;

public:
    // Default Constructor
    Student()
    {
        name = "Unknown";
        rollNo = 0;
        marks = 0;
        cout << "Default Constructor Called." << endl;
    }

    // Parameterized Constructor
    Student(string n, int r, float m)
    {
        name = n;
        rollNo = r;
        marks = m;
        cout << "Parameterized Constructor Called." << endl;
    }

    // Copy Constructor
    Student(const Student &s)
    {
        name = s.name;
        rollNo = s.rollNo;
        marks = s.marks;
        cout << "Copy Constructor Called." << endl;
    }

    // Member Function
    void display()
    {
        cout << "\nStudent Details:" << endl;
        cout << "Name     : " << name << endl;
        cout << "Roll No  : " << rollNo << endl;
        cout << "Marks    : " << marks << endl;
    }
};

int main()
{
    // Object using Default Constructor
    Student s1;
    s1.display();

    // Object using Parameterized Constructor
    Student s2("Priya", 39, 89.5);
    s2.display();

    // Object using Copy Constructor
    Student s3(s2);
    s3.display();

    return 0;
}