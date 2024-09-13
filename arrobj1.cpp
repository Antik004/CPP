#include<iostream>
using namespace std;
class shop{
    int id;
    float price;
    public:
        void setdata(int a,float b){
            id=a;
            price=b;
        }
        void getdata(){
            cout<<"code of this item is:"<<id<<endl;
            cout<<"price of this item is:"<<price<<endl;
        }
};
int main()
{
    int size=3;
    shop *ptr=new shop[size];
    
    return 0;
}