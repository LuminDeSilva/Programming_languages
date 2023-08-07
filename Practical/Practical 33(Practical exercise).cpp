#include <iostream>
using namespace std;


double general(double num1,double num2,double num3)
{
	double gen_sum=(num1+num2+num3)/3;
	return gen_sum;
 }
 
 double special(double num1,double num2,double num3,double num4)
{
	double spe_sum=(num1+num2+num3+num4)/4;
	return spe_sum;
 }  
 
 double argument(double num1,int num2)
 {
 	return num1/num2;
 }


int main()
{
	string name,regNo,type;
	
	cout<<"Enter your name : ";
	cin>>name;
	cout<<"Enter your registration number : ";
	cin>>regNo;
	cout<<"Enter your degree criteria :";
	cin>>type;
	cout<<endl;
	
	if(type=="General"||type=="general")
	{
		double value1,value2,value3;
		
		cout<<"Enter your GPA in level 1 : ";
		cin>>value1;
		cout<<"Enter your GPA in level 2 : ";
		
		cin>>value2;
		cout<<"Enter your GPA in level 3 : ";
		cin>>value3;
		
		cout<<"Your FGPA in general degree is "<<general(value1,value2,value3)<<endl;
		
	}
	else if(type=="Special"||type=="special")
	{
		double value1,value2,value3,value4;
		
		cout<<"Enter your GPA in level 1 : ";
		cin>>value1;
		cout<<"Enter your GPA in level 2 : ";
		cin>>value2;
		cout<<"Enter your GPA in level 3 : ";
		cin>>value3;
		cout<<"Enter your GPA in level 4 : ";
		cin>>value4;
		
		cout<<"Your FGPA in general degree is "<<special(value1,value2,value3,value4)<<endl;
		
	}
	
	
	
	return 0;
}
