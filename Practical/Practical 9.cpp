#include<iostream>

using namespace std;

int main()
{
	/*int x,sum=0;
	cout<<"Enter the value  "<<endl;
	for(int i=0;i<=10;i++)
	{
		cout<<"Enter the number  "<<i+1<<" : "<<endl;
		cin>>x;
		

		if(x%2==0)
		{
		

			cout<<"YOU HAVE ENTER AN EVEN NUMBER"<<endl;
			continue;
		}
		sum=sum+x;

	}
	cout<<"Sum of the number : "<<sum<<endl;
	*/
	/*
	int x=1;
	for(int i=1;i<50;i=i+2)
	{
		cout<<i<<" ";
		if(i%5==0)	
			cout<<endl;
			
		
		
			
		
		
	}
	int x=1;
	for(int i=1;i<=5;i++)
	{
		
		
		for(int j=1;j<=10;j++)
		{
				cout<<i*j<<" ";
				
							
		
		}
			cout<<endl;
	
		
	}
	*/
	int num1=0,num2=1,num3;
	int number;
	cout<<"Enter number fibonacci series : ";
	cin>>number;
	if(number==1)
		cout<<num1;
	else if(number==2)
		cout<<num1<<" , "<<num2;
	else
	{
		cout<<num1<<" , "<<num2;
		for(int i=3;i<=number;i++)
		{
			num3=num1+num2;
			cout<<" , "<<num3;
			num1=numm2;
			num2=num3;
		}
			}		
	
	
	
	
	
	return 0;
}
