#include <iostream>
using namespace std;
int main()
{
    //---------pointer----> a data type that holds the address
    // of other data types------//
   
    // &-->address of operator
    // *-->dereference operator
    int a=3;
    int* b=&a;
    cout<<"the address of a is"<<&a<<endl;
    cout<<"the address of a is"<<b<<endl;
    //* -->value at operator/dereference operator
    cout<<"the value at address b is"<<*b<<endl;
    int **c=&b;
    cout<<"the address of b is"<<&b<<endl;
    cout<<"the address of b is"<<c<<endl;
    cout<<"the value at c is"<<*c<<endl;
    cout<<"the value at address value_at(value_at((c))is"<<**c<<endl;
    return 0;
}
