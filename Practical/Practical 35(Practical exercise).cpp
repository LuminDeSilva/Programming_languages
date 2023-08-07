#include<iostream>
using namespace std;

int main()
{
	string gender[2]={"Girls","Boys"};
	string level[4]=("First level","Second level","Third level","Fourth level");
	int data[4][2]={{255,211},{203,121},{272,292},{25,275}};
	
	//two dimensional array
	cout<<"1: Two dimensional array of the FASS Week 2017"<<endl;
	cout<<endl;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<data[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"2: Score in level wise"<<endl;
	int sum=0,max;
	for(int i=0;i<4;i++)
	{
		sum=0;
		
		max==data[0][0];
		
		for(int j=0;j<2;j++)
		{
			
			sum=sum+data[i][j];
		
			if(data[i][j]>max)
				max=data[i][j];
		}
		cout<<max<<endl;
		cout<<sum<<endl;
	}
	
	//3rd question
	cout<<"Scores in gender wise"<<endl;
	cout<<endl;
	
	int sum_1=0,max_1;
	for(int i=0;i<2;i++)
	{
		sum_1=0;
		max_1=data[0][0];
		max=0;
		
		for(int j=0;j<4;j++)
		{
			
			sum_1=sum_1+data[i][j];
		
			if(data[i][j]>max)
				max_1=data[i][j];
		}
		cout<<max_1<<endl;
		cout<<sum_1<<endl;
	}

	
	return 0;
}
