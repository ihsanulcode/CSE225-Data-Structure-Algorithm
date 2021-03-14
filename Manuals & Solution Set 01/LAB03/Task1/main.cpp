#include "complex.h"
#include <iostream>
using namespace std;

int main()
{
    Complex c1(6,8);
    Complex c2(2,4);

    Complex sum = c1+c2;
    Complex sub = c1-c2;
    Complex mul = c1*c2;

    bool isEqual = (c1==c2);
    bool isNotEqual = (c1!=c2);

    //output
    cout << "Summation: "; sum.Print();
    cout << "Subtraction: "; sub.Print();
    cout << "Multiplication: "; mul.Print();

    cout << "\nEqual: " << isEqual << endl;
    cout << "Not Equal: " << isNotEqual << endl;

    return 0;
}
