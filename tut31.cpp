#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void printData()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
Complex c1(4,6);
c1.printData();
    return 0;
}