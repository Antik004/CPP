#include <iostream>
using namespace std;
class base{
    private:
            int data1;
    public: 
            int data2;
            int setdata();
            int getdata1();
            int getdata2();
};
class derived:public base{   
            int data3;
    public:
            void process();
            void display();
            
};
void derived::process(){
    data3=data2*getdata1();
};
void derived::display()
{
    cout<<"Value of data1 is"<<getdata1()<<endl;
    cout<<"Value of data1 is"<<data2<<endl;
    cout<<"Value of data1 is"<<data3<<endl;
};
int base::setdata(void){
            data1=10;
            data2=20;
};
int base::getdata1(void){
            return data1;
};
int base::getdata2(void){
            return data2;
};
int main(){
    derived der;
    der.setdata();
    der.process();
    der.display(); 
    return 0;
}