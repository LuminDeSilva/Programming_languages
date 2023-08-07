#include<iostream>
using namespace std;

typedef struct student{
	string name;
	int marks;
	
	void setDetail()
	{
		cout<<"Enter name :\t";
		cin>>name;
		cout<<"Enter marks :\t";
		cin>>marks;
	}
	
	void getDetail()
	{
		cout<<"Name :\t"<<name<<endl;
		cout<<"Marks :\t"<<marks<<endl;
	}
	
} STU;

int main()
{
	
	cout<<"Struct Demo"<<endl;
	
	//struct student s1;
	STU s1,s2,s3;
	
	//s1.name="Jane";
	//s1.marks=95;
	
	s1.setDetail();
	s2.setDetail();
	s3.setDetail();
	
	
	s1.getDetail();
	s2.getDetail();
	s3.getDetail();
	
	
	return 0;
}
