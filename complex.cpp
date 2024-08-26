//PROPERTIES OF FRIEND FUNCTIONS:-
// >not in the scope of the class
// >cannot be called from the object of that class
// c1.getDataByDiff(---,---)is invalid

//can be invoked without any object
//usually contains the objects as arguments-----here complex o1,o2 etc
//>cannot access the members directly by their names
//   > need objectname.member name
//          ex:-  o1.real;//object of complex here is o1
//              only member name like real is invalid 
#include<iostream>
using namespace std;
class complex{
    private:
    int real;
    int imaginary;
    public:
    void setData(int v1,int v2){
        real=v1;
        imaginary=v2;
    }
    void setDataBySum(complex o1,complex o2);//MEMBER FUNCTION
   // void setDataByDiff(complex o1,complex o2);//MEMBER FUNCTION
    friend  complex setDataByDiff(complex o1,complex o2);
    //FRIEND FUNCTION   
};
void complex::setDataBySum(complex o1,complex o2){
        real=o1.real+o2.real;
        imaginary=o1.imaginary+o2.imaginary;
        cout<<"sum is:"<<real<<"+"<<imaginary<<"i"<<endl;
    };
complex setDataByDiff(complex o1,complex o2){
        complex c3;
        c3.setData((o1.real+o2.real),(o1.imaginary+o2.imaginary));
        cout<<"Difference is"<<c3.real<<"+"<<c3.imaginary<<"i"<<endl;
};
int main()
{
    complex num4,num1,num2,num3;
    int r1,i1,r2,i2;
    cout<<"Enter real and imaginary part of 1st number"<<endl;
    cout<<"real"<<endl;
    cin>>r1;
    cout<<"imaginary"<<endl;
    cin>>i1;
    num1.setData(r1,i1);
    cout<<"Enter real and imaginary part of second number"<<endl;
    cout<<"real"<<endl;
    cin>>r2;
    cout<<"imaginary"<<endl;
    cin>>i2;
    num2.setData(r2,i2);
    num3.setDataBySum(num1,num2);
    setDataByDiff(num1,num2);
    return 0;
}
