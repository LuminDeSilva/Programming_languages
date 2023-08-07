#include<iostream>

using namespace std;

int main()
{
	int arraysize;
	cout<<"Enter the needed output amount\t:\t";
	cin>>arraysize;
	
	int number[arraysize],sum=0;
	
	for(int i=0;i<arraysize;i++)
	{
		cout<<"Enter the number "<<(i+1)<<"\t:\t";
		cin>>number[i];
	}
	for(int j=0;j<arraysize;j++)
	{
		cout<<"The array number ["<<j<<"]"<<number [j]<<endl;
		sum=sum+number[j];
	}
	cout<<"The total amount is\t:\t"<<sum<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
