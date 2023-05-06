#include <iostream>

using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying Base class variable var_base " << var_base << endl;
        cout << "Displaying Derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer; // This pointer will point to objects of Base class
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // Pointing base class to derived class // Base class pointer can pointer can point the object of derived class
 
    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived = 134; //Will throouth an error
    base_class_pointer -> display();

    base_class_pointer->var_base = 3400;
    base_class_pointer -> display();

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer -> var_base = 9788;
    derived_class_pointer -> var_derived = 98;
    derived_class_pointer -> display();
    return 0;
}