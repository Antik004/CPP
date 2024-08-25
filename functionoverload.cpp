#include<iostream>
#include<cmath>
using namespace std;
double calculate(double l, double b)
{
    return l*b;
}
double calculate(double a)
{
    return pow(a,2);
}
int main()
{
    int c;
    do{
    cout<<"enter 1 for rectangle and 2 for square area 3 for quitting "<<endl;
    cin>>c;
    switch(c){
        case 1:cout<<"Rectangle"<<endl;
               cout<<"Enter length and breadth"<<endl;
               double l,b;
               cin>>l;
               cin>>b;
               cout<<"Result is : "<<calculate(l,b)<<endl;
                break;
        case 2:cout<<"Square"<<endl;
               cout<<"Enter side of a square"<<endl;
               double a;
               cin>>a;
               cout<<"Result is : "<<calculate(a)<<endl;
               break;
        case 3: cout<<"Exiting"<<endl;
                break;
    }
    }while(c!=3);
    return 0;
}