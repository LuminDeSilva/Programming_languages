#include <iostream>
using namespace std;

/*
	syntax of a function
		functionType functionName (parameter_list)
		{
			return
		}
*/

void sayHello()					//void - function return
{
	cout<<"Hello User!"<<endl;
}

void sayHi(string name)
{
	cout<<"Hi, "<<name<<endl;
}

int addNum(int num1,int num2)         //(int num1, int num2)-----> parameter
{
	int add=num1+num2;
	return add; 						//return value
}
int mulNum(int num1, int num2)
{
	int mul=num1*num2;
	return mul;
}

int main()
{
	sayHello();
	sayHi("Lanfers");
	sayHi("Dark Angel");
	cout<<"Hi User!"<<endl;
	
	int a=10,b=20,sum;
	sum=addNum(a,b);
	cout<<a<<"+"<<b<<"="<<sum<<endl;
	int v=100,c=50;
	cout<<v<<"+"<<c<<"="<<addNum(v,c)<<endl;
	int x=3,y=5,count;
	count=mulNum(x,y);
	cout<<x<<"*"<<y<<"="<<count<<endl;
	
	
	
	return 0;
}
