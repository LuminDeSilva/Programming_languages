#include <iostream>
using namespace std;

int main()
{
	
	struct student
	{
		string name,regno,course;
		int age;
		float height;
		
	};
	//read no. of student
	//read the details of the student
	//print the detail of the students
	//find toungest and the eldest student
	
	int num;
	cout<<"Enter the number of students : ";
	cin>>num;
	cout<<endl;
	
	struct student data[num];
	
	for(int i=0;i<num;i++)
	{
		cout<<i+1<<". Enter the name : ";
		cin>>data[i].name;
		cout<<"   Enter the reg no. : ";
		cin>>data[i].regno;
		cout<<"   Enter the course : ";
		cin>>data[i].course;
		cout<<"   Enter the age : ";
		cin>>data[i].age;
		cout<<"   Enter the height (Kg): ";
		cin>>data[i].height;
		cout<<endl;
	}
	cout<<endl;
	
	cout<<"************The dtail of the students************"<<endl;
	cout<<endl;
	
	for(int i=0;i<num;i++)
	{
		cout<<i+1<<"). The student name : "<<data[i].name<<endl;
		cout<<"\tReg no : "<<data[i].regno<<endl;
		cout<<"\tCourse : "<<data[i].course<<endl;
		cout<<"\tAge : "<<data[i].age<<endl;
		cout<<"\tHeight : "<<data[i].height<<" kg"<<endl;
		cout<<endl;
	}
	cout<<endl;
	
		
	cout<<"************The youngest and eldest of the students************"<<endl;
	cout<<endl;
	
	int min=data[0].age,max=0,max_count,min_count;
	
	for(int i=0;i<num;i++)
	{
		if(max<data[i].age)
		{
			max=data[i].age;
			max_count=i;
		}
		if(data[i].age<min)
		{
			min=data[i].age;
			min_count=i;
		}
	}
	
	cout<<"The youngest student is "<<data[min_count].name<<" and age is "<<min<<" years old."<<endl;
	cout<<"The eldest student is "<<data[max_count].name<<" and age is "<<max<<" years old."<<endl;
	
	
	
	
	
	
	return 0;
}

