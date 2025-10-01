#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin>>str;

        if(str.length()>10)
        {
            char s,e;
            s=str[0];
            e=str[str.length()-1];
            string n=to_string(str.length()-2);
            str=s+n+e;
        }
        cout<<str<<endl;
    }
}