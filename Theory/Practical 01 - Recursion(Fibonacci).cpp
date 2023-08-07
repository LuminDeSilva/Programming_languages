#include <iostream>
using namespace std;

int fib(int n)
{
	if(n==1)
	{
		cout<<"@ n==0"<<endl;
		return 0; 
	}
	if(n==2)
	{
		cout<<"@ n==1"<<endl;
		return 1;
	}
	cout<<"calling fib("<<n-1<<")+fib("<<n-2<<") "<<endl;
	return fib(n-1)+fib(n-2);
}

int main()
{
	int num;
	cin>>num;
	cout<<endl;
	cout<<"Fibonacci : "<<fib(num);
	
	
	return 0;
}
