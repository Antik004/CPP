#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public: 
        void setId(void){
            cout<<"Enter the id of employee"<<endl;
            cin>>id;
        }
    void getId(void){
        cout<<"id is"<<id<<endl;
    }
};
int main(){
    cout<<"enter the number of employees"<<endl;
    int n;
    cin>>n;
    Employee Factory[n];
    for(int i=0;i<n;i++)
    {
        Factory[i].setId();
        Factory[i].getId();

    }
}