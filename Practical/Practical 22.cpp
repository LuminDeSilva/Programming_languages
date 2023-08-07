#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int rowsize,colsize;
	cout<<"Enter number of rows for an array : ";
	cin>>rowsize;
	cout<<"Enter number of columns for an array : ";
	cin>>colsize;
	
	int array1[rowsize][colsize];
	for(int i=0;i<rowsize;i++)
	{
	
		for(int j=0;j<colsize;j++)
		{
			cout<<"Enter element for ["<<i<<"] ["<<j<<"] : ";
			cin>>array1[i][j];	
		}
	}
	
	cout<<"Elememt of the array : "<<endl;
	int sum=0,minimum=array1[0][0],maximum=array1[0][0];
	for(int i=0;i<rowsize;i++)
	{
		for(int j=0;j<colsize;j++)
		{
			if(array1[i][j]>maximum)
				maximum=array1[i][j];
			
			if(array1[i][j]<minimum)
				minimum=array1[i][j];
				
			cout<<"["<<i<<"] ["<<j<<"] : "<<array1[i][j]<<"\t";	
		
			sum = sum+array1[i][j];
		}
		cout<<endl;
	}

	
	cout<<"Summation of the whole array : "<<sum<<endl;
	cout<<"Maximum number of the array : "<<maximum<<endl;
	cout<<"Minimum number of the array : "<<minimum<<endl;
	
	int rowsum=0,maximum1,minimum1;
	for(int i=0;i<rowsize;i++)
	{
		rowsum=0;
		maximum1=array1[0][0];
		minimum1=array1[0][0];
		for(int j=0;j<colsize;j++)
		{
			rowsum = rowsum+array1[i][j];
			
			if(array1[i][j]>maximum1)
				maximum1=array1[i][j];
			
			if(array1[i][j]<minimum1)
				minimum1=array1[i][j];
				
		}
		cout<<"Summation of a row  "<<(i+1)<<" :  "<<rowsum<<endl;
		cout<<"Maximum number in the row "<<(i+1)<<" array : "<<maximum1<<endl;
		cout<<"Minimum number in the row "<<(i+1)<<" array : "<<minimum1<<endl;
	}
	
	
	
	return 0;
}
