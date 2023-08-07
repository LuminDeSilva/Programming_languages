#include<iostream>
using namespace std;

double findsum(double num1, double num2, double &avg)
{
	avg =(num1+num2)/2;
	return (num1+num2);
}

double findsum(double num1, double num2, double &sum, double &avg)
{
	sum= (num1+num2);
	avg =(num1+num2)/2;
	
}

int main()
{
	double number1=33.6, number2=56.7,summation=0, average=0;
	cout<<number1<<" + "<<number2<<" = "<<findsum(number1,number2,average)<<endl;
	cout<<"Average of "<<number1<<" and "<<number2<<" : "<<average<<endl;
	
	number1=45.7, number2=90.8;
	findsum(number1,number2,summation,average);
	cout<<number1<<" + "<<number2<<" = "<<summation<<endl;
	cout<<"Average of "<<number1<<" and "<<number2<<" : "<<average<<endl;
	
	
		
	return 0;
}
