#include <iostream>
using namespace std;
class shop{
    private:
        int itemId[100];
        int itemPrice[100];
        int counter;
    public:
        void initcounter(void){
            counter=0;
         }
         void displayPrice(void);
         void setPrice(void);
};
void shop::setPrice(void)
{
    cout<<"Enter Id of your item "<<counter<<endl;
    cin>>itemId[counter];
    cout<<"Enter price of your item "<<endl;
    cin>>itemPrice[counter];
    counter++;
};
void shop::displayPrice(void)
{
    for(int i=0;i<=counter;i++)
    {
        cout<<"Id:"<<itemId[i]<<"----Price:"<<itemPrice[i]<<endl;
    }
};
int main()
{
    shop starter;
    int n,i;
    starter.initcounter();
    cout<<"Enter number of items"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        starter.setPrice();
    }
    starter.displayPrice();
    return 0;
}
