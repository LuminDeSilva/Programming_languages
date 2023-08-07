#include<iostream>
using namespace std;

void test1()
{
	throw 20;
	throw "Divide by zero error";
	throw runtime_error("Divide by zero error");
}


int main()
{
	try
	{
		test1();
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
		*try should be in memory that means in the main function int main()
	*/	
	
	return 0;
}

