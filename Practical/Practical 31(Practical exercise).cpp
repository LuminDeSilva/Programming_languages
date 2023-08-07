#include <iostream>
using namespace std;

int main ()
{
	int data[4][3]={{29,60,22},{31,54,24},{20,57,16},{3,18,9}};
	string course[3]={"AMC","ICT","ENS"};
	string level[4]={"Level-I","Level-II","Level-III","Level-IV"};
	
	//display
	cout<<"Student population at Faculty of Applied Science in Academic Year 2014/2015"<<endl;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<data[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<endl;
	
	int option;
		
	cout<<"1 - List the number of students in each course."<<endl;
	cout<<"2 - List the number of students in each level."<<endl;
	cout<<"3 - List the number of Students in a Specific course in a Particular level."<<endl;
	cout<<"4 - Display the total number of students in the academic year 2014/2015."<<endl;
	cout<<"5 - Exit the program."<<endl;
	
	begin:
	
	cout<<endl;
	cout<<"Choose the option : ";
	cin>>option;
	cout<<endl;
	
	if(option==1)
	{
		cout<<"-----------number of students in each course------------------"<<endl;
		cout<<endl;
		int sum;
		for(int i=0;i<3;i++)
		{
			int sum=0;
			for(int j=0;j<4;j++)
			{
				sum=sum+data[i][j];
			}
			cout<<course[i]<<" : "<<sum<<endl;
		}
		cout<<endl;
		goto begin;
	}
	else if(option==2)
	{
		cout<<"-----------------number of students in each level---------------"<<endl;
		cout<<endl;
		int sum;
		for(int i=0;i<4;i++)
		{
			data[i][0];
			sum=0;
			for(int j=0;j<3;j++)
			{
				sum=sum+data[i][j];
			}
			cout<<level[i]<<" : "<<sum<<endl;
		}
		cout<<endl;
		goto begin;
	}
	else if(option==3)
	{
		cout<<"-----------------number of Students in a Specific course in a Particular level------------"<<endl;
		cout<<endl;
		string course_name;
		int level_st;
		cout<<"Enter Course Name : ";
		cin>>course_name;
		cout<<"Enter level : ";
		cin>>level_st;
		cout<<endl;
		for(int i=0;i,3;i++)
		{
			if (course_name==course[i])
			{
				cout<<"Number of students of course "<<course_name<<" in level "<<level_st<<" : "<<data[level_st-1][i]<<endl;
			}
			
		cout<<endl;
		goto begin;
		}
	}
	else if(option==4)
	{
		cout<<"--------- the total number of students in the academic year 2014/2015------------"<<endl;
		cout<<endl;
		int sum;
		for(int i=0;i<4;i++)
		{
			data[i][0];
			for(int j=0;j<3;j++)
			{
				sum=sum+data[i][j];
			}
			
		}
		cout<<"Total number of student in the faculty : "<<sum<<endl;
		cout<<endl;
		goto begin;
	}
	else if(option==5)
	{
		goto end;
	}
	else
	{
		cout<<"You entered an incorrect number please enter again!"<<endl;
		cout<<endl;
		goto begin;
	}
	
	end:
	
	return 0;
}
