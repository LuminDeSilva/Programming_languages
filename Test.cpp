#include<iostream>

using namespace std;

int main()
{
 	/*
	 food city light bill payment: nexus holder and normal customer bill amount output
	 nexus 15%
	 normal discount 1000 10%
	 */	
	string name;
	double bill_amount,bill_sum1,bill_sum2;
	char holder; // Y,y ----> nexus holder or else N,n ---> normal
	
	//display 
	cout<< "Enter the person name\t:\t";
	cin>>name;
	cout<<"Enter the bill amount\t:\t";
	cin>>bill_amount;
	cout<<"Are you a nexus holder or not (Y or N)\t:\t";
	cin>>holder;
	cout<<endl;
	
	bill_sum1=bill_amount-(bill_amount*15/100);
	bill_sum2=bill_amount-(bill_amount*10/100);
	
	//program 
	if (holder=='y' || holder=='Y')
	{
		
		cout<<"Your bill amount is : "<<"Rs. "<<bill_sum1<<endl;
	}
	else if (holder=='n' || holder=='N')
	{
		if(bill_amount<1000)
		{
			cout<<"Your bill amount is : "<<"Rs. "<<bill_amount<<endl;
		}
		else
		{
			
			cout<<"Your bill amount is : "<<"Rs. "<<bill_sum2<<endl;
		}
	}
	
	
	
	
	
	
	
	return 0;
}
