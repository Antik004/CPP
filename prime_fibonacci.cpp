#include <iostream>
using namespace std;
bool isPrime(int n)
{
	int i,k,f=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		f=f+1;
	}
	if(f==2)
	return true;
	else return false;
}
bool isFibonacci(int n)
{
	int i,k[1000];
	k[0]=0;
	k[1]=1;
	for(i=2;i<=1000;i++)
	{
		k[i]=k[i-1]+k[i-2];
		if(k[i]==n)
		return true;
		else if (k[i]>n)
		break;
	}
        return false;
}
int main()
{
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	
	if(isPrime(n)&&isFibonacci(n)==true)
	cout<<"The number is prime as well as fibonacci"<<endl;
	else if(isPrime(n)==true)
	cout<<"The number is prime"<<endl;
	else if(isFibonacci(n)==true)
	cout<<"The number is fibonacci"<<endl;
}
