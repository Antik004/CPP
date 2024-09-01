#include<iostream>
using namespace std;
class Employee{
    protected:
            int emp_id;
    public:   
            void set_id(int);

};
void Employee::set_id(int x){
    emp_id=x;
};

class Assistant{
    protected:
            float s;
    public:
            void set_sal(float x){
                  s=x;
            }
};
class programmer:public Employee,public Assistant{
        protected:
                string level;
        public:
                void get_level(string s){
                    level=s;
                }
                void display(){
                    cout<<"ID:"<<emp_id<<endl;
                    cout<<"Salary:"<<s<<endl;
                    cout<<"Level:"<<level<<endl;
                }
};
int main()
{
    programmer antik;
    antik.set_id(234);
    antik.set_sal(50000);
    antik.get_level("A");
    antik.display();
    return 0;
}

