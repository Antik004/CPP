#include <iostream>
using namespace std;
class number
{
    int a;

public:
    number()
    {
        a = 0;
    }
    
    number(int num)
    {
        a = num;
    }
    //when no copy constructor is found compiler supplies its own dopy constructor

    number(number &obj)
    {
        cout<<"copy constructor called"<<endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The number for this object is:" << a << endl;
    }                                    
};
int main()
{
    number x, y,z(45),z2;
    z.display();
    number z1(x);//copycon. invoked
    z1.display();

    z2=z;//copycon not invoked
    number z3=z;//copycon invoked
    return 0;
}