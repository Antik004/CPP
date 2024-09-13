#include <iostream>
using namespace std;

int main()
{
    //basic
    int a=4;
    int* ptr= &a;
    cout<<*(ptr)<<endl;
    //---------------------------------------------------
    //new keyword
    int *p=new int(40);
    cout<<*p<<endl;
    //---------------------------------------------------
    int *arr=new int[3];
    arr[0]=10;
    *(arr+1)=50;
    arr[2]=20;
    //delete[] arr;
    
    for(int i=0;i<3;i++){
        cout<<"val at "<<i<<" is "<<arr[i]<<endl;
    }
    //---------------------------------------------------
    //delete operator

    return 0;
}