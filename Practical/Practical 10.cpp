#include<iostream>

using namespace std;

int main()
{
	/*
	int num1=0, num2=1, num3;
	int number;
	
	cout<<"Enter the pell number : ";
	cin>>number;
	if(number==1)
	{
		cout<<num1<<endl;
	}
	else if(number==2)
	{
		
		cout<<num1<<" , "<<num2<<endl;
	}
	else
	{
		
		cout<<num1<<" , "<<num2;
		for(int i=3;i<=number;i++)
		{
			num3=num1+2*num2;
			cout<<" , "<<num3;
			num1=num2;
			num2=num3;
		
			
		}
	}
	
	
	int i=0;
	while(i<10)
	{
		cout<<"i: "<<i<<endl;
		i++;
	}
	
	
	int i=1,j;
	while(i<=5)
	{
		j=1;
		while(j<=5)
		{
		
			cout<<i*j<<" ";
			j++;
		}
	i++;
	}
	*/
	
	double sum=0;
	int numsub=1,marks=0;
	while(numsub<=10)
	{
		cout<<"Enter marks for each subject : "<<numsub<<" : ";
		cin>>marks;
		sum=sum+marks;
		numsub++;
	}
	cout<<"Aveage marks of the subjects : "<<sum/10<<endl;










	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
