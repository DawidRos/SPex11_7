//
// Created by K i D on 17.05.2018.
//

#ifndef CLION_COMPLEX0_H
#define CLION_COMPLEX0_H
#include <iostream>

class Complex
{
private:
    double x;
    double y;
public:
    Complex();
    Complex(double a, double b = 0);
    ~Complex() {}
    friend Complex operator+(const Complex & a, const Complex & b);
    friend Complex operator-(const Complex & a, const Complex & b);
    friend Complex operator-(const Complex & a);
    friend Complex operator*(const Complex & a, const Complex & b);
    friend Complex operator*(const Complex & a, double c);
    friend Complex operator*(double c, const Complex & a);
    friend std::ostream & operator <<(std::ostream & co, const Complex & a);
    friend std::istream & operator >>(std::istream & co, Complex & a);
};
#endif //CLION_COMPLEX0_H
