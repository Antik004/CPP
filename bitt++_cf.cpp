#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int X=0;
    while(n!=0)
    {
        n--;
        string str;
        cin>>str;
        
        if(str=="++X"||str=="X++")
        {
            X++;
        }
        else if(str=="--X"||str=="X--")
        {
            X--;
        }
    }
    cout<<X<<endl;
}