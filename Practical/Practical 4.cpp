#include<iostream>
using namespace std;

int main()
{
	/*int a=10,b=5;
	cout<<"a==b="<<(a==b)<<endl;
	cout<<"a!=b="<<(a!=b)<<endl;
	cout<<"a>=b="<<(a>=b)<<endl;
	cout<<"a>b="<<(a>b)<<endl;
	cout<<"a<=b="<<(a<=b)<<endl;
	cout<<"a<b="<<(a<b)<<endl;*/	
	
	double a;
	cout<<"Enter your number = ";
	cin>>a;
	cout<<endl;
	
	if(a<100)
	{
		cout<<"number is less than 100"<<endl;
	}
	else if(a==100)
	{
		cout<<"number is equal to 100"<<endl;
	}
	else
	{
		cout<<"number is greater than 100"<<endl;
	}
	
	
	
	
	return 0;
}
