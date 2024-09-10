#include <iostream>
using namespace std;
/*ORDER OF EXECUTION:-
class B: public A
{

};
First base class cons then derived class cons
--------------------------------------------------------------------
class A:public B,public C{

};
B-->C--->A
--------------------------------------------------------------------
class A:public B,virtual public C{

};
C--->B--->A
-------------------------------------------------------------------
*/
class base1{
    int data1;
    public :
        base1(int i){
            data1=i;
            cout<<"Base1 class constructor called"<<endl;
        }
        void printData1(void){
            cout<<"The value of data is: "<<data1<<endl;
        }
        ~base1(){
            cout<<"base1 destructor called"<<endl;
        }
};
class base2{
    int data2;
    public :
        base2(int i){
            data2=i;
            cout<<"Base2 class constructor called"<<endl;
        }
        void printData2(void){
            cout<<"The value of data is: "<<data2<<endl;
        }
        ~base2(){
            cout<<"base 2 class destructor"<<endl;
        }
};
class derived:public base1,virtual public  base2{   
        int der1,der2;
        public:
            derived(int a,int b,int c,int d):base1(a),base2(b)
            {
                der1=c;
                der2=d;
                cout<<"Derived class constructor called"<<endl;
            }
            void printDataDer(void){
                cout<<"Val of derived1 is: "<<der1<<endl;
                cout<<"Val of derived2 is: "<<der2<<endl;
            }
            ~derived(){
                cout<<"Derived class destruxtor called"<<endl;
            }
};
int main(){
    
    derived obj(2,5,3,1);
    obj.printData1();
    obj.printData2();
    obj.printDataDer();
    return 0;
}