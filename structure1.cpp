#include <iostream>
using namespace std;

struct info
{
    int roll,marks;
    string name;
};
int main(){
    struct info data;
    struct info *ptr=&data;


    cout<<"Enter name"<<endl;
    cin>>ptr->name;
    cout<<"Enter roll"<<endl;
    cin>>ptr->roll;
    cout<<"Enter marks"<<endl;
    cin>>ptr->marks;
}