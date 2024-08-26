

#include <iostream>
using namespace std;
class Employee{
    private:
        int id;
        static int count;//Shared by all objects
        //its value does not change for different object
        //its the property of the object
        string name;
    public: 
        void  setId(void)
        {
             cout<<"Enter employee name"<<endl;
            cin>>name;
            cout<<"Enter the id"<<endl;
            cin>>id;
            count++;

        }
        void getId(void){

            cout<<"Name is"<<name<<endl;
            cout<<"ID is: "<<id;
        }
        static void getCount(void){
            //cout<<id; throws error;
        cout<<"the value of count is " <<endl;
        }
};
//default valiue is 0

int main()
{   
    string name;
    int n,i;
    cout<<"Enter number of employee"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
    Employee name;
    Employee::getCount();
    //antik.id =2251234;//cannot do this id is private
    name.setId();
    name.getId();
    
    }
    // rohan.setId();
    // rohan.getId();
    // rahul.setId();
    // rahul.getId();
    return 0;
}