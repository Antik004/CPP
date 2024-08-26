// see complex.cpp b4 this

#include <iostream>
using namespace std;
// Forward declaration
class Complex;

class Calculator
{
private:
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumComplex(Complex, Complex);
    int difComplex(Complex, Complex);
};

class Complex
{
private:
    int a, b;
    //INDIVIDUALLY DECLARATION OF FRIEND FUNCTIONS
    // friend int Calculator::sumComplex(Complex c1, Complex c2);
    // friend int Calculator::difComplex(Complex c1, Complex c2);


    // DECLARE ENTIRE CLASS AS FRIEND
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
};
int Calculator::sumComplex(Complex c1, Complex c2)
{
    cout << c1.a + c2.a << "+" << c1.b + c2.b << "i" << endl;
};
int Calculator::difComplex(Complex c1, Complex c2)
{
    cout << c1.a - c2.a << "+" << c1.b - c2.b << "i" << endl;
}

int main()
{
    Complex o1, o2;
    o1.setNumber(7, 8);
    o2.setNumber(3, 5);
    Calculator cal;
    cal.sumComplex(o1, o2);
    cal.difComplex(o1, o2);
    return 0;
}