#include <iostream>
using namespace std;
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        while(i<s.length()&&j<t.length())
        {
            if(s[i]==t[j])
            {
                i++;
            }
            j++;
        }

        if(i==s.length())
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
    int main(){
        string s,t;
        cout<<"Enter a string"<<endl;
        cin>>s;
        cout<<"Enter a second string"<<endl;
        cin>>t;
        bool x=isSubsequence(s,t);
        cout<<"Answer is:"<<x<<endl;
    }