#include <iostream>
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
	cout<<endl;
	
	
	int colsum=0,maximum2,minimum2;
	for(int j=0;j<colsize;j++)
	{
		colsum=0;
	
		maximum2=array1[0][j];
		minimum2=array1[0][j];
		

		for(int i=0;i<rowsize;i++)
		{
			colsum = colsum+array1[i][j];
			if(array1[i][j]>maximum2)
				maximum2=array1[i][j];
			
			if(array1[i][j]<minimum2)
				minimum2=array1[i][j];
			
		}
		
		cout<<"Summation of a column  "<<(j+1)<<" :  "<<colsum<<endl;
		cout<<"Maximum number in the column "<<(j+1)<<" array : "<<maximum2<<endl;
		cout<<"Minimum number in the column "<<(j+1)<<" array : "<<minimum2<<endl;
		
		
	}
	
	
	
	
	return 0;
}
