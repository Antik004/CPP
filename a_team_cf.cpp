#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int s=0;
    while(n!=0)
    {
        n--;
        int a,b,c;
        cin>>a>>b>>c;

        if(a+b+c>=2)
        {
            s++;
        }
    }
    cout<<s<<endl;
}