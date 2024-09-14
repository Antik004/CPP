#include<iostream>
using namespace std;
class base{
    public:
        int varbase=1;
         virtual void display(){
            cout<<"displaying base class variable varbase from base:"<<varbase<<endl;
        }
};
class derived:public base{
    public:
        int varderived=2;
        void display(){
            cout<<"displaying base class variable varbase from derived:"<<varbase<<endl;
            cout<<"displaying derived class variable:"<<varderived<<endl;
        
        }
};
int main(){
    base *baseptr;
    base baseobj;
    derived derobj;
    derived *derivedptr;
    baseptr=&derobj;
    baseptr->display();
    return 0;
}