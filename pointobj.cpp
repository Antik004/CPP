#include<iostream>
using namespace std;
class complex{
    int real,imaginary;
    public:
        
        void setData(int a,int b){
            real=(a);
            imaginary=(b);
        } 
        void getData(){
            cout<<"The real part is"<<real<<endl;
            cout<<"The imaginary part is"<<imaginary<<endl;
        }
};
int main()
{
    complex *ptr=new complex;
    // (*ptr).setData(1,40);
    // (*ptr).getData();    OR WE CAN USE
    ptr->setData(1,40);
    ptr->getData();

    //-------------------------------------------------------//
    //ARRAY OF OBJECTS//
    complex *ptr1=new complex[4];
    for(int i=0;i<4;i++){
        int x,y;
        cout<<"Enter values"<<endl;
        cin>>x>>y;
    (ptr1+i)->setData(x,y);
    (ptr1+i)->getData();
    }
    return 0;

}