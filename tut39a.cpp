#include <iostream>

using namespace std;

class Base {
    protected:
    int a;
    private:
    int b;
};
/*
For protected member :
                     Public Derivation   Private Derivation  Protection Derivation
 
1- private members    Not Inherited       Not Inheritable     Not Inheritable 
2- protected members  Protected           Private             Protected
3- Public members     Public              Private             Protected
*/
class Derived :protected Base{

};

int main(){
    Base b;
    Derived d;
    // cout<<b.a; //Here 'a' cannot be acessed as it is protected in both base as well as derived class
    return 0;
}