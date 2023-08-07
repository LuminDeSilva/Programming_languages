#include<iostream>
using namespace std;
int data;
double price;
string type;
void displayName()
{
	cout<<"Health club membership menu\n"<<endl;
	cout<<"1. Standard Adult Membership"<<endl;
	cout<<"2. Child Membership"<<endl;
	cout<<"3. Senior Citizen Membership"<<endl;
	cout<<"4. Quit the program"<<endl;
}

int getChoice()
{
	int choice;
	
	cout<<"\nEnter the choice to access the menu-driven program that computer health club membership fees : ";
	begin:
	cin>>choice;
	if(choice==1)
	{
		data=choice;
		price=40;
		type="Adult";
		return choice;
	}
	else if(choice==2)
	{
		data=choice;
		price=20;
		type="Child";
		return choice;
	}
	else if(choice==3)
	{
		data=choice;
		price=30;
		type="Senior";
		return choice;
	}
	
	else if(choice==4)
	{
		data=choice;
		return 0;
	}
	else
	{
		cout<<"\n   The only valid choice are 1-4.Please re-enter.";
		goto begin;
	}
}

void showFees(string memberType,double rate,int month)
{
	cout<<"\n\tMembership Type:"<<memberType<<"Number of months:"<<month<<endl;
	int total=rate*month;
	cout<<"\tTotal charge : $"<<total<<endl;
}

int main()
{
	back:
	displayName();
	getChoice();
	string member;
	int month;
	if(data==1)
	{
		cout<<"\nFor how many months? ";
		cin>>month;
		showFees(type,price,month);
	}
	else if(data==2)
	{
		cout<<"\nFor how many months? ";
		cin>>month;
		showFees(type,price,month);
	}
	else if(data==3)
	{
		cout<<"\nFor how many months? ";
		cin>>month;
		showFees(type,price,month);
	}
	else if(data==4)
	{
		return 0;
	}
	
	cout<<endl;

	goto back;
	
	
	//return 0;
}