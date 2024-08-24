#include <iostream>
using  namespace std;
int swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    
}
//-------Call by reference using pointers---------
int main()
{
    int a=4;
    int b=5;
    cout<<"value is"<<a<<" "<<b<<endl;
    swap(&a,&b);
    cout<<"Value is"<<a<<" "<<b<<endl;
    return 0;
}

