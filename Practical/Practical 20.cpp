#include<iostream>
using namespace std;

int main ()
{
	
	//two dimensional array
	int array1[2][3]={
		{23,45,67},//row0
		{56,78,90}//row1
	};
	int array2[3][5]={
		{45,56,78,90,52},//row0
		{78,90,21,54,32},//row1
		{43,32,554,76,88}//row2
	};
	
	for(int row=0;row<2;row++)
	{
		for(int col=0;col<3;col++)
		{
			cout<<"["<<row<<"] ["<<col<<"] : "<<array1[row][col]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<endl;
	
	for(int row=0;row<3;row++)
	{
		for(int col=0;col<5;col++)
		{
			cout<<"["<<row<<"] ["<<col<<"] : "<<array2[row][col]<<"\t";
		}
		cout<<endl;
	}
	
	
	
	
	
	
	return 0;
 }
