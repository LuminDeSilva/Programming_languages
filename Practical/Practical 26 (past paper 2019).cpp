#include<iostream>
using namespace std;

int main()
{
	int option;
	
	string vehicle_type[4]={"Van","Car","Cab","MOtor Bike"};
	string lot_number[3]={"lot-1","lot-2","lot-3"};
	int data[3][4]={{13,9,10,32},{10,18,20,34},{8,20,15,40}};
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<data[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
	
	cout<<"Choose an option : "<<endl;
	cout<<"1 : The total number of vehiocle in eaching parking lot"<<endl;
	cout<<"2 : The total number of vehicle in each type"<<endl;
	cout<<"3 : The total number of vehicle in all the parking lots and all the vehicle type"<<endl;
	cout<<"4 : Exit"<<endl;
	cout<<endl;
	
	//ask the user to enter an option
	start:
	cout<<"Enter the desired option : ";
	cin>>option;
	
	if(option==1)
	{
		int sum;
		for(int row=0;row<3;row++)
		{
			sum=0;
			for(int col=0;col<4;col++)
			{
				sum=sum+data[row][col];
			}
			cout<<"Total number in "<<lot_number[row]<<"\t"<<sum<<endl;
		}
		cout<<endl;
		goto start;
	}
	else if(option==2)
	{
		int sum;
		for(int col=0;col<4;col++)
		{
			sum=0;
			for(int row=0;row<3;row++)
			{
				sum=sum+data[row][col];
			}
			cout<<"Total number in "<<vehicle_type[col]<<"\t"<<sum<<endl;
		}
		cout<<endl;
		goto start;
	}
	else if(option==3)
	{
		int sum;
		for(int row=0;row<3;row++)
		{
			//sum=0;
			for(int col=0;col<4;col++)
			{
				sum=sum+data[row][col];
			}
		
		}
			cout<<"Total number in all : "<<"\t"<<sum<<endl;
			cout<<endl;
			goto start;
	}
	else if(option==4)
	{
		goto end;
	}
	else
	{
		cout<<"Invalid number! Please re-enter the desired option!"<<endl;
		cout<<endl;
		goto start;
	}
	
	end:
	
	return 0;
}
