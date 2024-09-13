#include<iostream>
using namespace std;
class base{
    public:
        int varbase;
        void display(){
            cout<<"displaying base class variable varbase from base:"<<varbase<<endl;
        }
};
class derived:public base{
    public:
        int varderived;
        void display(){
            cout<<"displaying base class variable varbase from derived:"<<varbase<<endl;
            cout<<"displaying derived class variable:"<<varderived<<endl;
        
        }
};
int main()
{
    base *baseptr;//pointer to baseclass type object
    base objbase;//object of base class
    derived objderived;///object of derived class
    baseptr=&objderived;//base class ponter pointing to derived class
    baseptr->varbase=40;
    baseptr->display();

    derived *derivedptr;
    derivedptr=&objderived;
    derivedptr->varderived=98;
    derivedptr->display();
    return 0;
}