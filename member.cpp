#include <iostream>
using namespace std;
class binary{
    string s;
    public:
        void read(void);
        void chkbin(void);
        void onecompli(void);
        void display(void);
};
void binary::read()
{
    cout<<"enter a binary number"<<endl;
    cin>>s;
};
void binary::chkbin()
{
    int f;
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
            f=0;
        else f=1;
    }
    if(f==0)
        cout<<"not binary"<<endl;
        else
        cout<<"binary"<<endl;
    
};
void binary::onecompli(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='1')
        s.at(i)='0';
        else if(s.at(i)=='0')
        s.at(i)='1';
    }
};
void binary::display()
{
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
};

int main()
{
    binary b;
    b.read();
    b.chkbin();
    b.onecompli();
    b.display();
    return 0;
}
