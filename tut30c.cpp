// Create a function (Hint: Make it a friend function which takes 2 point 
//Objects and Computers the distance between those 2 points
#include <iostream>
#include<math.h>
using namespace std;

class Distance
{
    int x, y;
    int x1, y1;

public:
    //vertical height
    void point1(int a, int b)
    {
        x = a;
        y = b;
    }

    void point2(int c, int d)
    {
        x1 = c;
        y1 = d;
    }

    void distance()
    {
        int h = ((x1-x)*(x1-x)) + ((y1-y)*(y1-y));
        cout<<"The distance between the two points is "<<sqrt(h)<<endl;
    }

};

int main()
{
    int p, q, r, s;

    cout<<"Enter the coordinates of the first point : "<<endl;
    cin>>p>>q;

    cout<<"Enter the coordinates of the second point : "<<endl;
    cin>>r>>s;

    Distance o1;
    o1.point1(p, q);
    o1.point2(r, s);
    o1.distance();

 
    return 0;
}