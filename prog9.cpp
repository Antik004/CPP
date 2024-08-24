#include <iostream>
using namespace std;
//--------Functions---------
int sum(int a,int b)//a & b are formal parameters
{
    int c=a+b;//a & b will be taking values from actual parameters
    return c;//return c i.e sum result to main
}
int main()
{
    int num1,num2;
    cout<<"Enter 1st number"<<endl;
    cin>>num1;
    cout<<"Enter 2nd no."<<endl;
    cin>>num2;
    return 0;
    //num1 and num2 are actual parameters
    cout<<"the sum is"<<sum(num1,num2);//Calling sum function
    return 0;
}