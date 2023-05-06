#include <iostream>

using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};
class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
//Below three lines are for ambiguity resolution 
    void greet()
    {
        Base2::greet();
    }
};

int main()
{
    //Ambiguity 1
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    Derived d;
    d.greet(); //This line will create ambiguity if the code for the ambiguity resolution is not written b/c the compiler will be confused which greet is being called from which class
    // d.Base2::greet(); // We can also write like this way
    return 0;
}