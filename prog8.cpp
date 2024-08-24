#include <iostream>
using namespace std;
struct employee
{
    int eId;
    char favChar;
    float salary;
};
int main(){
    struct employee antik;
    antik.eId=1;
    antik.favChar='A';
    antik.salary=100000;
    cout<<"Employee "<<antik.eId<<endl;
    cout<<"fav char is"<<antik.favChar<<endl;
    cout<<"Salary "<<antik.salary<<endl;
}
