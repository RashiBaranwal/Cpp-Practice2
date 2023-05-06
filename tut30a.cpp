// Default Constructors : Default constructor is the constructor which doesn’t take any argument. It has no parameters. 
//It is also called a zero-argument constructor.

// Parameterized Constructors : It is possible to pass arguments to constructors. 
//Typically, these arguments help initialize an object when it is created. 
//To create a parameterized constructor, simply add parameters to it the way you would to any other function.
// When you define the constructor’s body, use the parameters to initialize the object. 

#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int); // Constructor declaration

    void printNumber()
    {   
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y) // ----> This is a parameterized constructor as it accepts 2 parameters
{
    a = x;
    b = y;
    // cout<<"Hello world";
}

int main()
{
//Implicit call
Complex a(4,6);

//Explicit call
Complex b = Complex(5,7);

a.printNumber();
b.printNumber();
    return 0;
}