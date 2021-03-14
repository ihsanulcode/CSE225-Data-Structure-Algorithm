#include "complex.h"
#include <iostream>
using namespace std;

Complex::Complex()
{
    Real = 0;
    Imaginary = 0;
}

Complex::Complex(double r, double i)
{
    Real = r;
    Imaginary = i;
}

Complex Complex::operator +(Complex a)
{
    Complex sum;
    sum.Real = Real + a.Real;
    sum.Imaginary = Imaginary + a.Imaginary;
    return sum;
}

Complex Complex::operator -(Complex a)
{
    Complex sub;
    sub.Real = Real - a.Real;
    sub.Imaginary = Imaginary - a.Imaginary;
    return sub;
}

Complex Complex::operator *(Complex a){
    Complex m;
    m.Real = (Real*a.Real) - (Imaginary*a.Imaginary);
    m.Imaginary = (Real*a.Imaginary)-(Imaginary*a.Real);
    return m;
}

bool Complex::operator !=(Complex a){
    bool b = true;
    if(Real==a.Real && Imaginary==a.Imaginary){
       b = false;
    }

    return b;
}

bool Complex::operator ==(Complex a){
    bool b = false;
    if(Real==a.Real && Imaginary==a.Imaginary){
       b = true;
    }

    return b;
}

void Complex::Print()
{
    cout << Real << "+" << Imaginary << "i" << endl;
}
