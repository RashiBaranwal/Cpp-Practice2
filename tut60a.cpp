#include <iostream>
#include <fstream>

using namespace std;

/*
The useful classes for working with files in c++ are:
1- fstreambase
2- ifstream --> derived from fstreambase
3- ofstream -->derived from fstreambase
*/

// In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:

// Using the constructor
// Using the member function open() of the class

int main()
{
    string st = "Harry Bhai";
    string st2;

    // // Opening files using constructor and writing it
    // ofstream out("sample60.txt"); // Write operation
    // out << st;

    // Opening files using constructor and reading it
    ifstream in("sample60b.txt"); // Read operation
    // in >> st2;// This will only print 'Rashi'
    getline(in,st2);
    // getline(in,st2);
    cout << st2;

    return 0;
}