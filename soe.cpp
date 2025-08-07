#include<iostream>
using namespace std;
int soex(int A[],int noe)
{
    int i,sum=0;
    for(int i=0;i<noe;i++)
    {
        sum+=A[i];  // A[i]==*(A+i) i.e value at address A+i here A is the address not the array.
        A[i]=2* *(A+i);//==2*(A[i])
    }
    return sum;

}
int main()
{
    int A[]={1,2,3,4,5};
    int size=sizeof(A);//size of the entire array in bytes i.e here 20 bytes
    
    int noe=size/sizeof(A[0]);//no of elements in array i.e here 5
    int total=soex(A,noe);  //here when we pass A, the compiler makes a pointer to the address of first element of the array and stores it in a variable, it dosen't copies a whole entire array when an array is passed as an argument to a function.This is very crucial step in order to save the memory as arrays can be very large and unnecessarily making an entire copy of it dosen't makes sense.
    cout<< "Sum of the elemtns in the array is "<<total<<endl;

    for(int i=0;i<noe;i++)
    {
        cout<<A[i]<<endl;
    }
}