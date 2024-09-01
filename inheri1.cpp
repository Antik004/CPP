#include<iostream>
using namespace std;
//base class
class Employee{
    public:
    int id;
    string name;
    float salary;
       Employee(int i)
            {
                id=i;
                salary=10;
            }
            Employee(){};
};
//derived class syntax
// //class <derived_classname> :<visibility_mode>  <base_class_name>
// {
//     class members/methods/etc..
// }

// default visibility mode is private
class programmer: public Employee{
    public:
    programmer(int i)
    {
        id=i;
    }
    int languagecode=9;

};
int main()
{      
    Employee antik(1),rohan(2);
    cout<<antik.salary<<endl;
    cout<<rohan.salary<<endl;
    programmer skill(1);
    
    return 0;
}