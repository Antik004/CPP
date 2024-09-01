#include <iostream>
#include<cmath>
using namespace std;

class SimpleCalculator{
        protected:
                double res,a,b;
        public:
                void add(double x,double y){
                    a=x;
                    b=y;
                    res=a+b;
                }
                void sub(double x,double y){
                    a=x;
                    b=y;
                    res=a-b;
                }
                void mul(double x,double y){
                    a=x;
                    b=y;
                    res=a*b;
                }
                void div(double x,double y){
                    a=x;
                    b=y;
                    res=a/b;
                }
};
class ScientificCalculator{
        protected:
                double res1,c,d;
        public:
                void square(double x,double y){
                    c=x;
                    d=y;
                    res1=pow(c,d);
                }
                void root(double x){
                    c=x;
                    res1=sqrt(c);
                }
                 void cuberoot(double x){
                    c=x;
                    res1=cbrt(c);
                }
};
class HybridCalculator: public SimpleCalculator,public ScientificCalculator{
        public:
                void display(){
                 cout<<"Result is:"<<" "<<res<<endl;
                 cout<<"Result is:"<<" "<<res1<<endl;
                }
};
int main()
{
    HybridCalculator z;
    z.add(459,400);
    z.root(49);
    z.display();
    return 0;
}