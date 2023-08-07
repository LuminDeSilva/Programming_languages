#include<iostream>
using namespace std;

typedef struct student{
	string name;
	int marks;
	
	void setDetail(int i, int m)
	{
		name="Student_"+to_string(i);
		marks=m;
//		cout<<"Enter name :\t";
//		cin>>name;
//		cout<<"Enter marks :\t";
//		cin>>marks;
	}
	
	void getDetail()
	{
		cout<<"Name :\t"<<name<<endl;
		cout<<"Marks :\t"<<marks<<endl;
	}
	
} STU;

typedef struct ClassRoom{
	STU s[10];
	//STU s1,s2,s3;
	
	void init()
	{
		for(int i=0;i<10;i++)
		{
			s[i].setDetail(i,rand()%100);
			cout<<"Created studebnt #"<<i<<"->Name: "<<s[i].name<<", Marks: "<<s[i].marks<<endl;
		}
	}
	
	float findAvg()
	{
		int sum=0;
		for(int i=0;i<10;i++)
		{
			sum+=s[i].marks;
		}
		cout<<"Total = "<<sum<<endl;
		return sum/10;
	}
	
	string getFirstRankStudent()
	{
		int max=0,max_index=0;
		for(int i=0;i<10;i++)
		{
			cout<<"Iterating inside for loop i="<<i<<endl;
			cout<<"max is "<<max<<" , marks of student "<<i<<" = "<<s[i].marks<<endl;
			
			if(s[i].marks>max)
			{
				max=s[i].marks;
				max_index=i;
			}
		}
		return s[max_index].name;
	}
	
} CR;




int main()
{
	
	cout<<"Struct Demo"<<endl;
	
	//struct student s1;
	//STU s1,s2,s3;
	
	//s1.name="Jane";
	//s1.marks=95;
	
	CR ClassRoom1;
//	ClassRoom1.s1.settDetail();
//	ClassRoom1.s1.getDetail();
	
	ClassRoom1.init();
	CLassRoom1.s[0].getDetail();
 	CLassRoom1.s[5].getDetail();
	cout<<"The average marks : "<<ClassRoom1.findAvg()	<<endl;
	cout<<"The first ranker is: "<<ClassRoom1.getFirstRankStudent()<<endl;	
	
	 
	
	
	return 0;
}
