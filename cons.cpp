//constructor is a special member function with the same name as of its 
//used to initialize objects of that class
//It is automatically invoked or called whenever an object is created
//>should be declare in public section of the class
//>automatically invoked whenevr the object is created
//>cannot have return values and do not have return types
//>it can have default arguments
//>cannot refer to their address
#include<iostream>
using namespace std;
class complex{
    private:
        int a,b;
    public:
    //creating  a constructor
    complex(void);//constructor declaration
    void printNumber()
    {
        cout<<"Number is"<<a<<"+"<<b<<"i"<<endl;
    }
};
complex::complex(void){
    a=0;
    b=0;
};

int main()
{           
    complex c1,c2,c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}