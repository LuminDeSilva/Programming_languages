#include<iostream>

using namespace std;

void print_my_reg_no()
{
	string reg="2019/ICT/00";
	cout<<"Registration no:- "<<reg<<endl;
}

void find_age()
{
	int year,cal_year;
	cout<<"Enter the birth year:- ";
	cin>>year;
	cal_year=2022-year;
	cout<<"Your age is "<<cal_year<<endl;
}

int max(int a[])
{
	int maximum=a[0];
	for(int i=0;i<10;i++)
	{
		if(a[i]>maximum)
		{
			maximum=a[i];
		}
	}
	return maximum;
}

int min(int a[])
{
	int minimum=a[0];
	for(int i=0;i<10;i++)
	{
		if(a[i]<minimum)
		{
			minimum=a[i];
		}
	}
	return minimum;
}

int range(int a[])
{
	int min=a[0],max=0,total_range;
	for(int i=0;i<10;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	total_range=max-min;
	return total_range;
}

int main()
{
	int a[10]={23,78,48,96,547,254,78,63,996,14};
	print_my_reg_no();
	find_age();
	cout<<"Largest element in the array is "<<max(a)<<endl;
	cout<<"Smallest element in the array is "<<min(a)<<endl;
	cout<<"The range of the element in the array is "<<range(a)<<endl;
	
	return 0;
}