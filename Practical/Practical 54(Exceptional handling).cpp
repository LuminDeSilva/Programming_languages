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
			throw "Divide by zero error";
		}
		int result=x/y;
		cout<<"The result = "<<result<<endl;
	}
	catch(const char *e)		//Even it is a string we have to use char type and also have to use * mark (star mark)
	{
		cout<<e<<endl;
	}
	
	
	
	return 0;
}
