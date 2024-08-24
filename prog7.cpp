#include<iostream>
using namespace std;
int main()
{
    int i=0;
    int marks[4]={1,2,3,4};
    cout<<"the array is"<<endl;
    while(i<4)
    {
        cout<<marks[i]<<" "<<endl;
        i++;
    }
    //----------Pointers in arrays--------------//
    int *p=marks;
    for(i=0;i<=3;i++){
    cout<<"The value of marks[0] is "<<*p+i<<endl;
    }
  return 0;  
}