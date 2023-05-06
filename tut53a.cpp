#include <iostream>

using namespace std;

class A
{
    int a;

public:
    // A &setData(int a)
    void setData(int a)
    {
        this->a = a;
        // return *this; 
    }
    void getData()
    {
        cout << "The value of a ia " << a << endl;
    }
};

int main()
{
    // This is a keyword which is a pointer which points to objects
    //  which invokes the member function

    A a;
    a.setData(4);
    // a.setData(4).getData();
    a.getData();

    return 0;
}