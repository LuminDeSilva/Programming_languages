#include <iostream>
using namespace std;

//addSum (double,double)
double addSum(double num1,double num2)
{
	cout<<"addSum (double,double)"<<endl;
	return (num1+num2);
}

//addsum (int,int)
double addSum(int num1,int num2)
{
	cout<<"addsum (int,int)"<<endl;
	return num1+num2;
}

//addSum (double,int)
double addSum(double num1,int num2)
{
	cout<<"addSum (double,int)"<<endl;
	return (num1+num2);
}

//addSum (int,double)
double addSum(int num1,double num2)
{
	cout<<"addSum (int,double)"<<endl;
	return (num1+num2);
}

//addSum (double,double,double)
double addSum(double num1,double num2,double num3)
{
	cout<<"addSum (double,double,double)"<<endl;
	return (num1+num2+num3);
}


int main()
{
	int inum1=34,inum2=56;
	double dnum1=34.65,dnum2=56.23,dnum3=46.25;
	
	double num=addSum(dnum1,dnum2);
	cout<<dnum1<<"+"<<dnum2<<" = "<<num<<endl;
	cout<<endl;
	
	double num1=addSum(dnum2,inum2);
	cout<<dnum2<<"+"<<inum2<<" = "<<num1<<endl;
	cout<<endl;
	
	cout<<inum2<<"+"<<dnum3<<" = "<<addSum(inum2,dnum3)<<endl;
	cout<<endl;
	
	cout<<dnum3<<"+"<<dnum2<<" = "<<addSum(dnum3,inum2)<<endl;
	cout<<endl;
	
	cout<<dnum1<<"+"<<dnum2<<"+"<<dnum3<<" = "<<addSum(dnum1,dnum2,dnum3)<<endl;
	cout<<endl;
	
	
	
	
	return 0;
}
