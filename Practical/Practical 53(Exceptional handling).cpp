#include<iostream>
using namespace std;

int main()
{
	try
	{
		int x=10;
		int y;
		cout<<"Enter the value for y : ";
		cin>>y;
		if(y==0)
		{
			throw y;
		}
		int result=x/y;
		cout<<"The result = "<<result<<endl;
	}
	catch(int e)		//catch(...)  alseo can be used ----> (default type) 
	{
		cout<<"The value of y cannot be divided because it is 0, ERROR : "<<e<<endl;
	}
	
	
	
	return 0;
}
