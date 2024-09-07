#include <iostream>
using namespace std;
/* 
    student---->test [done]
    student---->sports
    test------->result
    sports----->result
    */
class student{
    protected:
        int roll_no;
    public:
        void set_number(int x)
        {
            roll_no=x;
        }
        void print_number(void){
            cout<<"ur roll no. is"<<roll_no<<endl;
        }
};
class test:virtual public student{
    protected:
        float maths,physics;
        public:
            void set_marks(float m1,float m2){
                maths =m1;
                physics =m2;
            }
            void print_marks(){
                cout<<"your marks is\n"<<"Maths:"<<maths<<"\nPhysics:"<<physics<<endl;

            }
};
class sports:virtual public student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score=sc;
        }
        void print_score(void){
            cout<<"your score is\n"<<score<<endl;
        }

};
class result:public test,public sports{
        private:
            float total;
        public:
            void display(void)
            {
                total=maths+physics+score;
                print_number();
                print_marks();
                print_score();
                cout<<"total marks obtained is:"<<total<<endl;
            }
};
int main()
{   
    result antik;
    antik.set_marks(98.9,99.5);
    antik.set_number(234);
    antik.set_score(20);
    antik.display();
    
    return 0;
}
