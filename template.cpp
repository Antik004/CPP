//TEMPLATES ARE CLASSES WITH PARAMETERS
//WHY TEMPLATES?--> GENERIC PROGRAMMING
//SYNTAX----->
//template<class T>
//class vector{
//     T *arr;
//     public:  
//          vector(T *arr)
//              {   code   };
//      ------other methods-----
//   };
#include<iostream>
using namespace std;
template <class T>
class vector{
    public:
    T *arr;
    int size;
    public:
        vector(int m){
             size=m;
            arr=new T[size];

        }
        T dotproduct(vector &v){
            T d=0;
            for(int i=0;i<size;i++)
            {
                d+=this->arr[i]*v.arr[i];
               
            }
             return d;
        }
};
int main(){
    vector <float>v1(3);
    v1.arr[0]=4.8;
    v1.arr[1]=6;
    v1.arr[2]=5;
    vector <float>v2(3);
    v2.arr[0]=4;
    v2.arr[1]=1;
    v2.arr[2]=4;
    float a=v1.dotproduct(v2);
    cout<<a<<endl;
    return 0;
}
