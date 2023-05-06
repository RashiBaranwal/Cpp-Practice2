#include <iostream>

using namespace std;

/*
Syntax for initialization list in constructor:

constructor(argument-list): initialisation-section
{
    assignment + other code;
}

class Test{
    int a;
    int b;
    public:
    Test(int i, int j):a(i),b(j){constructor-body}
};

*/
class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)   // 4 and 6
    // Test(int i, int j) : a(i), b(i+j) // 4 and 10
    // Test(int i, int j) : a(i), b(2*j)    // 4 and 12
    // Test(int i, int j) : a(i), b(a*j)   // 4 and 24
    // Test(int i, int j) : b(j),a(i+b) -->RED Flag this will create problems because 'a' will be initialized first
    // Therefore a will give garbage value and b is 6
    Test(int i, int j)
    {
        a = i;//We can also write it in this way or Like this ---> ':a(i),b(j)'
        b = j;
        cout << "constructor executed" << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};

int main()
{
    Test t(4, 6);
    return 0;
}