#include<iostream>
#include<cmath>
using namespace std;


double BMI(double num1,double num2)
{
	//int data1=pow(num2,3);
	int data2=num1/(num2*num2);
	return data2;
}

int main()
{
	double user_height,user_weight;
	
	cout<<"Enter your weight in pounds : ";
	cin>>user_weight;
	cout<<"Enter your height in inches : ";
	cin>>user_height;
	
	user_height=user_height*0.0264;
	
	user_weight=user_weight*0.45359237;
	
	cout<<"Your BMI is : "<<BMI(user_weight,user_height)<<endl;
	double BMI_1=BMI(user_weight,user_height);
	if(BMI_1<18.5)
	{
		cout<<"Underweight"<<endl;
	}
	
	else if(BMI_1<18.5 && BMI_1>24.9)
	{
		cout<<"Normal"<<endl;
	}
	else if(BMI_1<25 && BMI_1>29.9)
	{
		cout<<"Overweight"<<endl;
	}
	else 
	{
		cout<<"Fatter"<<endl;
	}
	return 0;
}
