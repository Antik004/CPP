#include <iostream>
using namespace std;

class point{
    private:
        int x;
        int y;
    public: 
        point(int a,int b){
            x=a;
            y=b;
        }
       friend class cal;
};
class cal{
    public:
        void calpoint(point x1,point x2)
        {
            cout<<"The distance between points are"<<"("<<x2.x-x1.x<<","<<x2.y-x1.y<<")"<<endl;
        }
};
int main()
{
    int x1,y1,x2,y2;
    cout<<"Enter the x value of 1st point"<<endl;
    cin>>x1;
    cout<<"Enter the y value of 1st point"<<endl;
    cin>>y1;
    cout<<"Enter the x value of 2nd point"<<endl;
    cin>>x2;
    cout<<"Enter the y value of 2nd point"<<endl;
    cin>>y2;
    point p1(x1,y1),p2(x2,y2);
    cal c1;
    c1.calpoint(p1,p2);
    return 0;
}