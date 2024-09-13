#include <iostream>
using namespace std;
class A{
    int a;
    public:
        A &setdata(int a){
            this->a=a;
            return *this;
        }
        void getdata(){
            cout<<"the value of aa is"<<a<<endl;
        }
};
int main(){
    A a;
    a.setdata(4);
    a.getdata();
    return 0;
}