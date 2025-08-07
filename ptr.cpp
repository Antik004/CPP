#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a = 5;
    int* p = &a;
    void* ptr0 = p;//address pointed by p ⚠️WARNING!! not the address of p itself
    cout << ptr0 << endl;
    ptr0=&p; //address of pointer p itself
    cout << ptr0 <<endl;
    cout << "This is the address of a: " << &a << endl;
    cout << "This is the address of p: " << &p << endl;
    cout << "This is the value pointed to by p: " << *p << endl;
    cout << "This is the address pointed by p: " << p << endl;
    cout << "The size of an int is: " << sizeof(a) << " bytes" << endl;
    *p=6;
    cout<<a<<endl;
    // int *x=&p;//invalid
    int **q=&p;
    cout<<q<<endl;

    int ***z;
    z=&q;
    cout<<z<<endl;

    cout<< **q << endl;
    cout<< *z<< endl;
    cout<< **z<<endl;
    cout<< ***z<<endl;

    ***z=1000;
    cout<<a<<endl;
}
