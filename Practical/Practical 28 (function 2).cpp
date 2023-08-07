#include <iostream>
using namespace std;

double addNum(double,double);
double subNum(double,double);
double divNum(double,double);
double mulNum(double,double);


int main()
{
	
	int num1, num2;
	cout<<"Enter number 1 : ";
	cin>>num1;
	cout<<"Enter number 2 : ";
	cin>>num2;
	cout<<endl;
	
	cout<<num1<<" + "<<num2<<" = "<<addNum(num1,num2)<<endl;
	cout<<num1<<" - "<<num2<<" = "<<subNum(num1,num2)<<endl;
	cout<<num1<<" / "<<num2<<" = "<<divNum(num1,num2)<<endl;
	cout<<num1<<" * "<<num2<<" = "<<mulNum(num1,num2)<<endl;
	
	
	return 0;
}

//define function declare above

double addNum(double num1,double num2)
{
	double add=num1+num2;
	return add;
}

double subNum(double num1,double num2)
{
	return (num1-num2);
}
double divNum(double num1,double num2)
{
	double div=num1/num2;
	return div;
}
double mulNum(double num1,double num2)
{
	return num1*num2;
}
