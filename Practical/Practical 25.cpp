#include <iostream>

using namespace std;

int main()
{
	int data_1[6][5]={{10,7,12,10,4},
					  {18,11,15,17,10},
					  {12,10,9,5,13},
					  {16,6,13,8,3},
					  {10,7,12,6,4},
					  {9,4,7,12,11}};
	string brand_name[6]={"HONDA","FORD","GM","TOYOTA","NISSAN","BMW"};
	string color_name[5]={"GREEN","BLUE","YELLOW","BLACK","WHITE"};
	//print the information				  
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<data_1[i][j]<<"\t";
		}		
		cout<<endl;
	}	
	
	//find the largest sale for each color and print the brand and the sale
	int colmax, colmax_index;
	string brand;
	
	for(int col=0;col<5;col++)
	{
		colmax=data_1[0][col];colmax_index=0;
		for(int row=0;row<6;row++)
		{
			if(colmax<data_1[row][col])
			{
				colmax=data_1[row][col];
				colmax_index=row;
			}
		}
		if(colmax_index==0)
			brand="HONDA";
		if(colmax_index==1)
			brand="FORD";
		if(colmax_index==2)
			brand="GM";
		if(colmax_index==3)
			brand="TOYOTA";
		if(colmax_index==4)
			brand="NISSAN";
		if(colmax_index==5)
			brand="BMW";
		cout<<"Brand : "<<brand<<"\tSales : "<<colmax<<endl;	
			
			
	}
	cout<<endl;
	int rowmax,rowmax_index;
	
	for(int row;row<6;row++)
	{
		rowmax=data_1[row][0];
		rowmax_index=0;
		for(int col=0;col<5;col++)
		{
			if (rowmax<data_1[row][col])
			
			{
				
				rowmax=data_1[row][col];
				rowmax_index=col;
			}
			
		}
		
	
	string color;
	if(rowmax_index==0)
		color="GREEN";
		if(rowmax_index==1)
		color="GREY";
		if(rowmax_index==2)
		color="BLUE";
		if(rowmax_index==3)
		color="YELLOW";
		if(rowmax_index==4)
		color="WHITE";
	cout<<"COLOR : "<<color<<"\tSALES : "<<rowmax<<endl;
	}	
	cout<<endl;
	int sum;
	for(int row=0;row<6;row++)
	{
		sum=0;
		
		for(int col=0;col<5;col++)
		{
			sum=sum+data_1[row][col];
		}
		cout<<"BRAND : "<<brand_name[row]<<"\t"<<sum<<endl;
	}
	
	cout<<endl;
	
	
	for(int col=0;col<5;col++)
	{
		sum=0;
		for(int row=0;row<6;row++)
		{
			sum=sum+data_1[row][col];
		}
		cout<<"COLOR : "<<color_name[col]<<"\t"<<sum<<endl;
	}
	
	
	
	
	
	
	
	return 0;
}
