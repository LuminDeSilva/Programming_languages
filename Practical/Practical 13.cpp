#include <iostream>

using namespace std;

int main()
{
	
	/* 
	declaration of an array 
	syntax:
	 	<type>  <arrayname>  [array size]
	 	int number [10];
	*/
	
	//index starting from 0
	/*
	int number [5]={22,33,44};
	double dNumber [3];
	int firstArray [3]{0,0,0}; 
	dNumber [0]=23.04;
	dNumber [1]=34.05;
	dNumber [2]=66.09;
	
	//access elements from 0 to size-1 (in bounds)
	cout<<"Numbers [0]:  "<<number [0]<<endl;
	cout<<"Numbers [1]:  "<<number [1]<<endl;
	cout<<"Numbers [2]:  "<<number [2]<<endl;
	cout<<"Numbers [3]:  "<<number [3]<<endl;
	cout<<"Numbers [4]:  "<<number [4]<<endl;
	

	
	for(int i=0;i<5;i++)
	{
		cout<<"Numbers ["<<i<<"]:  "<<number [i]<<endl;
	}
	
	for(int j=0;j<3;j++)
	{
		dNumber[j] = dNumber [j]+j;
	}
	
	cout<<"dNumbers [0]:  "<<dNumber [0]<<endl;
	cout<<"dNumbers [1]:  "<<dNumber [1]<<endl;
	cout<<"dNumbers [2]:  "<<dNumber [2]<<endl;
	
	 	
	*/
	
	
	int arraysize;
	
	cout<<"Enter the size of the array :   ";
	cin>>arraysize;
	//Declare an array with size 12
	int number[arraysize];
	//Initializing an array using for loop
	for(int i=0;i<arraysize;i++)
	{
		cout<<"Enter element "<<(i+1)<<" :   ";
		cin>>number[i];
		//number[i]=55+i;
	}
	//Printing the elements of the array
	for(int j=0;j<arraysize;j++)
	{
		cout<<"numbers["<<j<<"];"<<number[j]<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
