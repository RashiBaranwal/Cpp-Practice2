// How to use one variable with many object
// Static Data Member
#include <iostream>

using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is : " << id << "\n"
             << "and This is employee number " << count << endl;
    }
};

// Count is static data member of class employee
int Employee ::count; // Default value is zero
// We can observed that this count variable is accessed by all the three object
//  and we are using it only once in Class

int main()
{
    Employee harry, lovish, rohan;
    // harry.id = 1;
    // harry.count = 1; //Cannot do this as id and count are private

    harry.setData();
    harry.getData();

    lovish.setData();
    lovish.getData();

    rohan.setData();
    rohan.getData();

    return 0;
}