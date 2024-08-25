//RECURSIONS
#include <iostream>
using namespace std;
int factorial(int a)
{
    if(a<=1)
    return 1;
    return a*factorial(a-1);
}
bool fibonacci(int a)
{
    if(a<=1)
    return true;
    int k[a];
    k[0]=0;
    k[1]=1;
    for(int i=2;i<=a;i++)
    {
         k[i]=k[i-2]+k[i-1];
    }
    for(int j=0;j<=a;j++)
    {
        if(a==k[j])
        return true;
    }
    return false;
}
int posfibo(int a)
{
    if(a<=1)
    return 1;
    return posfibo(a-2)+posfibo(a-1);
}
int main()
{
    //factorial
    int a;
    cout<<"enter a number"<<endl;
    cin>>a;
    cout<<"Factorial is : "<<factorial(a)<<endl;
    if(fibonacci(a)==true)
    cout<<"The number is fibonacci"<<endl;
    else 
    cout<<"The number is not fibonacci"<<endl;
    cout<<"The number at position "<<a<<" is "<<posfibo(a)<<endl;
    return 0;
}
//Suppose entered no. is 4 
//factorial(4)= 4*factorial(3)
            // = 4*3*factorial(2)
            // = 4*3*2*factorial(1)
            // = 4*3*2*1
            // = 24 Yay we got the answer!!!
