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
			throw 20;
			throw "Divide by zero error";
			throw runtime_error("Divide by zero error");		//runtime_error is a class
		}
		int result=x/y;
		cout<<"The result = "<<result<<endl;
	}
	catch(int e)
	{
		cout<<e<<endl;
	}
	catch(const char *e)
	{
		cout<<e<<endl;
	}
	catch(runtime_error e)		//Even it is a string we have to use char type and also have to use * mark (star mark)
	{
		cout<<e.what()<<endl;		//what() is a predefine function
	}
	
	/*
		*only one of the throw will be output
		*and the cathch will be executed related to the throw
		*the first throw will output
	*/
	
	
	return 0;
}
