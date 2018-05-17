#include "complex0.h"

using namespace std;

Complex::Complex()
{
    x = 0;
    y = 0;
}

Complex::Complex(double a, double b)
{
    x = a;
    y = b;
}

Complex operator+(const Complex & a, const Complex & b)
{
    Complex c;
    c.x = a.x + b.x;
    c.y = a.y + b.y;
    return c;
}

Complex operator-(const Complex & a, const Complex & b)
{
    Complex c;
    c.x = a.x - b.x;
    c.y = a.y - b.y;
    return c;
}

Complex operator-(const Complex & a)
{
    Complex temp;
    temp.x = a.x;
    temp.y = -a.y;
    return temp;
}

Complex operator*(const Complex & a, const Complex & b)
{
    Complex c;
    c.x = a.x*b.x - a.y*b.y;
    c.y = a.x*b.y + a.y*b.x;
    return c;
}

Complex operator*(const Complex & a, double c)
{
    Complex d;
    d.x = a.x*c;
    d.y = a.y*c;
    return d;
}

Complex operator*(double c, const Complex & a)
{
    return a * c;
}

std::ostream & operator<<(std::ostream & co, const Complex & a)
{
    co << "(";
    co << a.x;
    co << ",";
    co << a.y;
    co << "i)\n";
    return co;
}

std::istream & operator >>(std::istream & co, Complex & a)
{
    cout << "skladowa rzeczywista:";
    co >> a.x;
    cout << "skladowa urojona:";
    co >> a.y;
    return co;
}