#include<iostream>
using namespace std;

class Base{
    protected:
    int a;
    private:
    int b;  
};
/*
for a protected member
Members            public derivation    private derivation     protected derivation
1.public              public                 private            protected
2.private           not inherited        not inherited         not inherited 
3.protected          protected               private            protected


*/
class Derived:protected Base{
    
};
int main(){
    Base b;
    Derived d;
    //cout<<d.a; will not work becauxe a is protected in base as well as derived
    
    return 0;
}