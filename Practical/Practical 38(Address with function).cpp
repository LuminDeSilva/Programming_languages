#include<iostream>
using namespace std;

void changenum(int &num)
{
	num=num+1;
}


void changenum_2(int &num1, int &num2)
{
	num1=num1+2;
	num2=num2+5;
}

 int main()
 {
 	int number1=10;
 	cout<<"number1: "<<number1<<endl;
 	changenum(number1);
 	cout<<"After the function call, number1: "<<number1<<endl;
 	
 	int number2=50;
 	cout<<"number2: "<<number2<<endl;
 	changenum(number2);
 	cout<<"After the function call, number2: "<<number2<<endl;
 	
 	changenum_2(number1,number2);
 	cout<<"After the function call, number1: "<<number1<<endl;
 	cout<<"After the function call, number2: "<<number2<<endl;
 	
 	
 	
 	return 0;
 }
