#include<iostream>

using namespace std;

int main()
{
	/*for(int i=1;i<=5;i++)
	{
		cout<<"i=  "<<i<<endl;
		for(int j=1;j<=4;j++)
		{
			cout<<"\t j=  "<<j<<endl;
			for(int k=1;k<=2;k++)
			{
				cout<<"\t\t k=  "<<k<<endl;
			}
		}
	}*/
	/*int sum=0;
	for(int i=1;i<=20;i++)
	{
		if(i%2==0)
			sum+=i; 
	}
	cout<<sum<<endl;
	*/
	/*
	int z,y,x,a,sum1,sum2,sum3,sum4;
	sum1=0;
	sum2=0;
	sum3=0;
	sum4=0;
	
	cout<<"Enter begining number = ";
	cin>>z;
	cout<<"Enter the ending number = ";
	cin>>y;
	cout<<endl;
	

	
	for(z,y;z<=y;z++)
	{
		if(z%2==0)
		{
			sum1+=z;
			sum3=z;
		}
		else 
		{
			sum2+=z;
			sum4=z;
		}
		
	}
		cout<<"Count of the even numbers " <<sum3<<endl;
		cout<<"Count of the odd numbers " <<sum4<<endl;
		cout<<"Sum of the even numbers " <<sum1<<endl;
		cout<<"Sum of the odd numbers " <<sum2<<endl;*/
		
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	
	
	
	
	
	
	return 0;
}
