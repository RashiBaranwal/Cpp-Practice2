#include <iostream>

using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter  the id of Employee" << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "The Id of this emoloyee is " << id << endl;
    }
};

int main()
{
    // Employee harry, rohan, lovish, shruti;
    // harry.setId();
    // harry.getId();

    // What if we want to store more number of no of employee
    //  so it is ideal for us to use array concept

    // Using array
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}