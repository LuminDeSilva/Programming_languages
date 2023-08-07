#include <iostream>

using namespace std;

int main()
{
	int matrix1[3][3]={{10,22,38},{45,32,56},{67,12,33}};
	int matrix2[3][3]={{23,45,60},{38,62,40},{17,24,}};
	int result[3][3];

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			result[i][j]=matrix1[i][j]+matrix2[i][j];
		}
	}
	
	cout<<"Matrix 1 : "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<matrix1[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<endl;
	
	cout<<"Matrix 2 : "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<matrix2[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
	
	cout<<"Total : "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<result[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	
	
	
	
	
	return 0;
}
