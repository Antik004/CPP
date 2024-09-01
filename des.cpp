#include <iostream>
using namespace std;
//destructor never takes an argument nor returns any value
int count=0;
class num{
    public:
        num(){
            count++;
            cout<<"Constructor called for obj"<<count<<endl;
        }
        ~num(){
            cout<<"Destructor called for object number"<<count<<endl;
            count--;
        }
};
int main()
{   
    cout<<"We are inside main"<<endl;
    cout<<"creating 1st object n1"<<endl;
    num n1;
    {
        cout<<"Entering block"<<endl;
        cout<<"Creating 2 more objects"<<endl;
        num n2,n3;
        cout<<"Exiting block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}