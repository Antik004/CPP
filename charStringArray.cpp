
#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main(){
    char C[]="ANTIK";
    cout<<sizeof(C)<<endl;
    cout<<C<<endl;
    cout<<strlen(C)<<endl;

    char *c2;
    c2=&C[0];
    cout<<static_cast<void*>(c2)<<endl;// we need to do the static cast thingy to get the address of the first element
}

//Arrays are always passed to function by reference