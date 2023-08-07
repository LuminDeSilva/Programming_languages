/*
	write a function sumTo that accepts an integer parameter a and return the sum of all integers from 1 throught n inclusive
*/

#include <iostream>
using namespace std;

int sumTo(int num)
{
	int sum;
	for (int i=0;i<=num;i++)
	{
		sum=sum + i;
	}
	return sum;
}

int main()
{
	int x;
	cout<<"Enter the integer : ";
	cin>>x;
	cout<<endl;
	cout<<"the sum of all integers from 1 throught "<<x<<" inclusive is "<<sumTo(x)<<endl;
	
	return 0;
}
