#include<iostream>

using namespace std;

int main()
{
	/*
	int i=0;
	do
	{
		cout<<"i: "<<i<<endl;
		i++;
	}while(i<=10);
	
	*/
	/*
	int num=0,counter=1,sum=0;
	char n='n';
	cout<<"Enter some numbers to find the summation"<<endl;
	
	do
	{
		cout<<"Entere number "<<counter<<":";
		cin>>num;
		sum+=num;
		cout<<"Do you want to enter another number (y/n)?"<<endl;
		cin>>n;
		counter++;
		
	}while(n=='y' || n=='Y');
	cout<<"Sum of the number you entered : "<<sum<<endl;
	
	*/
	string namest, regno;
	int age,num=1;
		cout<<"Enter the name\t:\t";
		cin>>namest;
		cout<<"Enter the registration number\t:\t";
		cin>>regno;
	do
	{
	
		cout<<"Enter the age\t:\t";
		cin>>age;
		
		
	}while(age<0 || age>120 );
	
		
	cout<<"Name\t:\t"<<namest<<"\nRegno\t:\t"<<regno<<"\nAge\t:\t"<<age<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
