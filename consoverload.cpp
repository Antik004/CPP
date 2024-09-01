#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void printnumber()
    {
        cout << "Number is:" << a << "+" << b << "i" << endl;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    complex()
    {
        a=0;
        b=0;
    }
};
int main()
{
    complex c1(4, 6);
    c1.printnumber();
    complex c2(6);
    c2.printnumber();
    complex c3;
    c3.printnumber();
};
