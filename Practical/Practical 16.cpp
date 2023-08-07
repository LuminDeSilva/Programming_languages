#include <iostream>

using namespace std;

int main ()
{
	
	int arraysize;
	cout<<"How many numbers are you going to type : ";
	cin>>arraysize;
	
	int number[arraysize];
	
	for (int i=0;i<arraysize;i++)
	{
		cout<<"Enter number "<<(i+1)<<" : ";
		cin>>number[i];
	}
	
	//print array element
	for(int i=0; i<arraysize;i++)
	{
		cout<<"["<<i<<"]"<<number[i]<<"\t";
	}
	//take the last element
	int last= number[arraysize-1]; 
	//replace all elements other than the first element by one step forward
	for(int i=arraysize-1;i>0;i--)
	{
		number[i]=number[i-1];
	}
	number[0]=last;
	cout<<"\n Elements of the array after the right rotation : "<<endl;
	for(int i=0;i<arraysize;i++)
	{
		cout<<"["<<i<<"]"<<number[i]<<"\t";
	}
	
	
	
	return 0;
}
