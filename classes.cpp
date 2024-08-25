//NORMAL STRUCTURES ARE NOT SAFE, THATS WHY WE USE CLASSES IN C++
//WE CANNOT declare or USE FUNCTIONS OR DEFINE FUNCTIONS INSIDE STRUCTURES.
//class have specifiers known as access specifiers which state how the contenets of that class can be accessed
//classes are extension of structures 
//they are better than structures as they have secured access conditions
#include<iostream>
using namespace std;
class employee{
    private:
        int a,b,c;
    public:
       int  d,e;
       void setdata(int a1,int b1,int c1);//declaration
       void getdata();//declaration ps: we can also define the function here as it is but i will prefer to do it outside the class

};
void employee::getdata()
{
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
};
void employee::setdata(int a1,int b1,int c1)
{
    a=a1;
    b=b1;
    c=c1;

};
int main()
{
    employee antik;
    //antik.a=9 note:this cannot be written as a is private 
    //a can only be accessed by some member function of employee class
    antik.d=5;
    antik.e=6;
    antik.setdata(1,2,4);
    antik.getdata();
    return 0;
}