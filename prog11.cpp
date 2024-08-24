//DEFAULT FUNCTIONS & CONSTANT ARGUMENTS 
#include <iostream>
using namespace std;
int product(int a,int b)
{
    static int c=0;
    c=c+1;//this line will be executed only once and the value will be saved.
    //next time this same function is called, the modified value of c will be saved.

    return a*b+c;
};
float moneyReceived(int currentMoney,float factor=1.04)
{
    return currentMoney*factor;
}
int strlength(const string str)
{
    return str.size(); 
}
int main()
{
    int a,b;
    string s;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a;
    cin>>b;
    cout<<"The product of a and b is "<<product(a,b)<<endl;  
    int money=100000;
    cout<<"If we have "<<money<<" in our bank acc, we will receive "<<moneyReceived(money)<<" Rs after 1 year"<<endl;
    cout<<"Enter string"<<endl;
    cin>>s;
    cout<<strlength(s)<<endl;
     
    return 0;
}
