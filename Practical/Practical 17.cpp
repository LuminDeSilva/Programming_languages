#include <iostream>

using namespace std;

int main()
{
	
	int arraysize;
	cout<<"HOw much numbers you are entering : ";
	cin>>arraysize;
	int num[arraysize];
	
	for(int i=0;i<arraysize;i++)
	{
		cout<<"Enter the number "<<(i+1)<<" : ";
		cin>>num[i];
	}
	
	cout<<"Elements of the array : "<<endl;
	for(int i=0;i<arraysize;i++)
	{
		cout<<"["<<i<<"] : "<<num[i]<<"\t";
	}
	
	int first=num[0];
	
	for (int i=1;i<arraysize;i++)
	{
		num[i-1]=num[i];
	}
	
	num[arraysize-1]=first;
	
	cout<<"\n Elements of the array after rotation : "<<endl;
	for(int i=0;i<arraysize;i++)
	{
		cout<<"["<<i<<"] : "<<num[i]<<"\t";
	}
	
	
	
	
	
	
	
	return 0;
}
