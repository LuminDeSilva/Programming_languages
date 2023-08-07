#include <iostream>

using namespace std;


int main ()
{
	/*
	int arraysize;
	int number[arraysize],sum=0;
	
	cout<<"Enter the number\t:\t";
	cin>>arraysize;
	
	for(int i=0;i<arraysize;i++)
	{
		cout<<"Enter the number "<<(i+1)<<"\t:\t";
		cin>>number[i];
	}
	for(int j=0;j<arraysize;j++)
	{
		cout<<"number ["<<j<<"]"<<number[j]<<endl;
	}
	int max=number[0];
	for(int j=1;j<arraysize;j++)
	{
		if(number[j]>max)
			max=number[j];
	}
	cout<<"The maximum number is "<<max<<endl;
	
	int min=number[0];
	for(int j=1;j<arraysize;j++)
	{
		if(number[j]<min)
			min=number[j];
	}
	cout<<"The maximum number is "<<min<<endl;
	
	*/
	
	
	
	int arraysize;
	cout<<"How many numbers are you going to enter?\t";
	cin>>arraysize;
	
	int number[arraysize],copyofnumber[arraysize];
	//read the elements of the array
	
	for(int i=0;i<arraysize;i++)
	{
		cout<<"Enter number "<<(i+1)<<" : ";
		cin>>number[i];
	}
	//print the elements of the array
	
	cout<<"The element of the array :"<<endl;
	for(int i=0;i<arraysize;i++)
	{
		cout<<"["<<i<<"]"<<number[i]<<"\t";
	}
	//copy the elements of one array to another array
	cout<<endl;
	for(int i=0;i<arraysize;i++)
	{
		copyofnumber[i]=number[i];
	}
	
	//Print the elements of the second array
	cout<<"The elements of the second array : "<<endl;
	for(int i=0;i<arraysize;i++)
	{
		cout<<"["<<i<<"]"<<copyofnumber[i]<<"\t";
	 } 
	 
	 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
