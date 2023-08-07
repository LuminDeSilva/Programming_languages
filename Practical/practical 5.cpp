#include<iostream>

using namespace std;

int main()
{
	/*for(int i=10;i>=1;i--)
	{
		cout<<i<<endl;
	}
	cout<<"End of the loop"<<endl;
	*/
	
	/*for(int i=3;i<=30;i=i+3)
	{
		cout<<i<<endl;
	}
	cout<<"End of the loop"<<endl;
	*/
	
	/*
	int sum =0;
	for(int i=1;i<=20;i++)
	{
		sum+=i;
		cout<<sum<<endl;
	
	}
	cout<<"End of the loop"<<endl;
	*/
	int x,sum;
	cout<<"enter the number\t:\t";
	cin>>x;
	for(int i=1;i<=x;i++)
	{
		sum+=i;
	}
	
	cout<<"Sum of the number is "<<sum<<endl;
	cout<<"End of the loop"<<endl;
	
	
	
	
	
	
	
	
	
	return 0;
}
