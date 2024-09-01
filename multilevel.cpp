#include<iostream>
using namespace std;
class student{
    protected:
        int roll_number;
    public: 
        void set_rnumber(int);
        void get_roll_number(void);
};
void student::set_rnumber(int x)
{
    roll_number=x;
};
void student::get_roll_number()
{
    cout<<"roll number is:"<<roll_number<<endl;
};

class exam:public student{
        protected :
            float math;
            float physics;
        public:
            void set_marks(float,float);
            void get_marks();
};
void exam:: set_marks(float m,float p){
    math =m;
    physics=p;
};
void exam:: get_marks(){
    cout<<"Math:"<<math<<endl;
    cout<<"Physics:"<<physics<<endl;
};
class result: public exam{

    float percentage;
    public:
            void display();
};
void result::display(){
    get_roll_number();
    get_marks();
    cout<<"Your percentage is:"<<(math+physics)/2<<"%"<<endl;
};
int main()
{
   /*
    1. if we are inheriting B from A and C from B:a--->b     c---->b
    2.  A is the base class for B and B is base class for C
    3.  A--->B--->C is called inheritance path
   */
    result antik;
    antik.set_rnumber(234);
    antik.get_roll_number();
    antik.set_marks(98.5,99.7);
    antik.get_marks();
    antik.display();
    return 0;
} // namespace std;
