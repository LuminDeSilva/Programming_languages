#include<iostream>
using namespace std; 

int fact(int n)
{
	if (n==0)
	{
		return 1;
		cout<<"@ n==0"<<endl;
	}
	else
	{ 
		cout<<"@ calling "<<n<<" * factorial("<<n-1<<") "<<endl;
		return n*fact(n-1);	
	}
}

int main()
{
	int num;
	cout<<"Enter a number to calculate the factorial : ";
	cin>>num;
	cout<<endl;
	cout<<endl;
	cout<<"Factorial : "<<fact(num);
	
	return 0;
}
