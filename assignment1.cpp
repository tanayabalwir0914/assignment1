
#include <iostream>
using namespace std;

class Employee
{
    int id;
    float salary;

public:
    Employee()
    {
        id = 101;
        salary = 25000;

        cout << "Employee object has been initialized." << endl;
    }

    void displayDetails()
    {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Salary: " << salary << endl;
    }

    ~Employee()
    {
        cout << "Employee object is being destroyed." << endl;
    }
};

int main()
{
    Employee e1;

    e1.displayDetails();

    return 0;
}
