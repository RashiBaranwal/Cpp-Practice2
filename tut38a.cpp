#include <iostream>

using namespace std;

class Base
{
    int data1; // Private by default and is not inheritable
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData(void)
{
    data1 = 10;
    data2 = 20;
}

int Base::getData1()
{
    return data1;
}
int Base::getData2()
{
    return data2;
}

class Derived : private Base
{ 
    // Class is being derived publically
    int data3;

public:
    void process();
    void display();
};

void Derived ::process()
{
    setData();
    data3 = data2 * getData1();
    // Whenever we are needing data1 we are not calling it directly we are using getData1()
    // B/C int data1; is private and cannot be accessed directly without making function and this getData function is public
}

void Derived ::display()
{
    cout << "Value of data 1 is " << getData1() << endl; //For accessing data1
    cout << "Value of data 1 is " << data2 << endl;
    cout << "Value of data 1 is " << data3 << endl;
}

int main()
{
    Derived der;
    //der.setData();
    der.process();
    der.display();
    return 0;
}