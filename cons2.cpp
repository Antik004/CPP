//PARAMETERIZED CONSTRUCTORS    


#include<iostream>
using namespace std;
class complex{
    private:
        int a,b;
    public:
    complex(int x,int y);
    void printNumber()
    {
        cout<<"Number is"<<a<<"+"<<b<<"i"<<endl;
    }
};
complex::complex(int x,int y){  //parameterized---->takes x & y as parameters
    a=x;
    b=y;
};
int main()
{           
    complex c1(1,2),c2(3,4);//implicit call
    complex c3=complex(7,8);
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}
