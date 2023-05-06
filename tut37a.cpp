#include <iostream>

using namespace std;

// Base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Derived class syntax
/*
class {{derived_classs_name}} : {{visibility_mode}} {{base_class_name}}
{
    class members/methods/etc.......
}

Note:
 1-Default visibility mode is private.
 2-Public visibility made: Public members of the base class becomes Public members of the derived class
 3-Private visibility Mode : Public members of the base class becomes Private members of the derived class
 4-Private members are never inherited
*/

// Creating a programmer class derived from employee Base class
class Programmer : public Employee
{
public:
    Programmer(int inpId)
    {
        id = inpId;
    }
    int languageCode = 9;
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    skillF.getData();
    return 0;
}