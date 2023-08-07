#include<iostream>
using namespace std;

void findArithmetics(double num1, double num2, double &add, double &sub, double &div, double &mul)
{
	add =num1+num2;
	sub =num1-num2;
	div =num1/num2;
	mul =num1*num2;
	
}

int main()
{
	double number1=22.5, number2=53.4,addition=0,substraction=0,division=0,multiplication=0;
	findArithmetics(number1,number2,addition,substraction,division,multiplication);
	cout<<number1<<" + "<<number2<<" = "<<addition<<endl;
	cout<<number1<<" - "<<number2<<" = "<<substraction<<endl;
	cout<<number1<<" / "<<number2<<" = "<<division<<endl;
	cout<<number1<<" * "<<number2<<" = "<<multiplication<<endl;
	
	
	
	return 0;
}
