#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //----------Constants----------//
    // const int a=3;
    // int a=34;//error for a is a constant
    // cout<<"the val of a was"<<endl;
    
    // cout<<"the val of a is"<<endl;

    // //------------Manipulators---------//
    // int a=3,b=78,c=1233;
    // cout<<"the value of a is"<<setw(4)<<a<<endl;//setw does justification 
    // cout<<"the value of b is"<<setw(4)<<b<<endl;//i.e right alignment
    // cout<<"the value of c is"<<setw(2)<<c<<endl;
    // return 0;
    int a=3,b=4;
    int c=(((a*5)+b-45)+87);
    cout<<c<<endl;
}