#include<iostream>
using namespace std;

int main()
{
	int option,choose;
	char return_val;
	int no_apple=0,no_orange=0,no_mango=0,no_pineapple=0,no_lemon=0;
	int unit_apple,unit_orange,unit_mango,unit_pineapple,unit_lemon;
	int apple=0,orange=0,mango=0,pineapple=0,lemon=0;
	
	cout<<"-----------------Welcome to A-Z fruit store-----------------------"<<endl;
	cout<<"\t1.Apple"<<endl;
	cout<<"\t2.Orange"<<endl;
	cout<<"\t3.Mango"<<endl;
	cout<<"\t4.Pineapple"<<endl;
	cout<<"\t5.Lemon"<<endl;
	cout<<"\t6.Exit"<<endl;
	begin:	
	cout<<"Choose the fruit you want : ";		//extra output code to beautify the code and output
	cin>>option;
	
	if(option == 1)
	{
		cout<<"Enter the number of apples : ";
		cin>>no_apple;
		cout<<"Enter unit price of apple : ";
		cin>>unit_apple;
		cout<<"Do you want to add more items(Y/N) : ";
		cin>>return_val;
		
		if(return_val== 'Y' || return_val== 'y')
		{
			goto begin;
		}
		else
		{
			goto mid;
		}
	}
	else if(option == 2)
	{
		cout<<"Enter the number of oranges : ";
		cin>>no_orange;
		cout<<"Enter unit price of orange : ";
		cin>>unit_orange;
		cout<<"Do you want to add more items(Y/N) : ";
		cin>>return_val;
		
		if(return_val== 'Y' || return_val== 'y')
		{
			goto begin;
		}
		else
		{
			goto mid;
		}
	}
	else if(option == 3)
	{
		cout<<"Enter the number of mango : ";
		cin>>no_mango;
		cout<<"Enter unit price of  : ";
		cin>>unit_mango;
		cout<<"Do you want to add more items(Y/N) : ";
		cin>>return_val;
		
		if(return_val== 'Y' || return_val== 'y')
		{
			goto begin;
		}
		else
		{
			goto mid;
		}
	}
	else if(option == 4)
	{
		cout<<"Enter the number of pineapple  : ";
		cin>>no_pineapple;
		cout<<"Enter unit price of pineapple : ";
		cin>>unit_pineapple;
		cout<<"Do you want to add more items(Y/N) : ";
		cin>>return_val;
		
		if(return_val== 'Y' || return_val== 'y')
		{
			goto begin;
		}
		else
		{
			goto mid;
		}
	}
	else if(option == 5)
	{
		cout<<"Enter the number of lemon : ";
		cin>>no_lemon;
		cout<<"Enter unit price of lemon : ";
		cin>>unit_lemon;
		cout<<"Do you want to add more items(Y/N) : ";
		cin>>return_val;
		
		if(return_val== 'Y' || return_val== 'y')
		{
			goto begin;
		}
		else
		{
			goto mid;
		}
	}
	else if(option == 6)
	{
		return 0;
	}
	else
	{
		cout<<"You entered an invalid option! Please re-enter!\n"<<endl;
		goto begin;
	}
	
	mid:
	cout<<"==========================================================================================="<<endl;
	cout<<"Initial stock available at store "<<endl;
	cout<<"Apple : "<<no_apple<<endl;
	cout<<"Orange : "<<no_orange<<endl;
	cout<<"Mango : "<<no_mango<<endl;
	cout<<"Pineapple : "<<no_pineapple<<endl;
	cout<<"Lemon : "<<no_lemon<<endl;
	cout<<"==========================================================================================="<<endl;
	
	cout<<endl;
	
	cout<<"To make the order please select the fruit"<<endl;
	cout<<"\t1.Apple"<<endl;
	cout<<"\t2.Orange"<<endl;
	cout<<"\t3.Mango"<<endl;
	cout<<"\t4.Pineapple"<<endl;
	cout<<"\t5.Lemon"<<endl;
	cout<<"\t6.Exit"<<endl;
	up:
	cout<<"Choose an option from above : ";		//extra output code to beautify the code and output
	cin>>choose;
	
	if(choose == 1)
	{
		cout<<"Enter number of apple : ";
		cin>>apple;
		cout<<"Do you want to add more items (Y/N) : ";
		cin>>return_val;
		
		if(return_val== 'Y' || return_val== 'y')
		{
			goto up;
		}
		else
		{
			goto down;
		}
	}
	else if(choose == 2)
	{
		cout<<"Enter number of orange : ";
		cin>>orange;
		cout<<"Do you want to add more items (Y/N) : ";
		cin>>return_val;
		
		if(return_val== 'Y' || return_val== 'y')
		{
			goto up;
		}
		else
		{
			goto down;
		}
	}
	else if(choose == 3)
	{
		cout<<"Enter number of mango : ";
		cin>>mango;
		cout<<"Do you want to add more items (Y/N) : ";
		cin>>return_val;
		
		if(return_val== 'Y' || return_val== 'y')
		{
			goto up;
		}
		else
		{
			goto down;
		}
	}
	else if(choose == 4)
	{
		cout<<"Enter number of pineapple : ";
		cin>>pineapple;
		cout<<"Do you want to add more items (Y/N) : ";
		cin>>return_val;
		
		if(return_val== 'Y' || return_val== 'y')
		{
			goto up;
		}
		else
		{
			goto down;
		}
	}
	else if(choose == 5)
	{
		cout<<"Enter number of lemon : ";
		cin>>lemon;
		cout<<"Do you want to add more items (Y/N) : ";
		cin>>return_val;
		
		if(return_val== 'Y' || return_val== 'y')
		{
			goto up;
		}
		else
		{
			goto down;
		}
	}
	else if(choose == 6)
	{
		return 0;
	}
	else
	{
		cout<<"You entered a invalid option! Please re-enter!\n"<<endl;
		goto up;
	}
	
	down:
		
	cout<<"============================================================================================"<<endl;
	cout<<"Items\t\t No. of fruits\t\t    Unit price\t\t\t Price"<<endl;
	cout<<"------\t\t -------------\t\t    ----------\t\t\t -------"<<endl;
	cout<<"Apple\t\t\t"<<apple<<"\t\t\t Rs."<<unit_apple<<"\t\t\t Rs."<<apple*unit_apple<<endl;
	cout<<"Orange\t\t\t"<<orange<<"\t\t\t Rs."<<unit_orange<<"\t\t\t Rs."<<orange*unit_orange<<endl;
	cout<<"Mango\t\t\t"<<mango<<"\t\t\t Rs."<<unit_mango<<"\t\t\t Rs."<<mango*unit_mango<<endl;
	cout<<"Pineapple\t\t"<<pineapple<<"\t\t\t Rs."<<unit_pineapple<<"\t\t\t Rs."<<pineapple*unit_pineapple<<endl;
	cout<<"Lemon\t\t\t"<<lemon<<"\t\t\t Rs."<<unit_lemon<<"\t\t\t Rs."<<lemon*unit_lemon<<endl;			
	cout<<"============================================================================================"<<endl;
	cout<<endl;
	cout<<"==========================================================================================="<<endl;
	cout<<"Initial stock available at store now"<<endl;
	cout<<"Apple : "<<no_apple-apple<<endl;
	cout<<"Orange : "<<no_orange-orange<<endl;
	cout<<"Mango : "<<no_mango-mango<<endl;
	cout<<"Pineapple : "<<no_pineapple-pineapple<<endl;
	cout<<"Lemon : "<<no_lemon-lemon<<endl;
	cout<<"==========================================================================================="<<endl;
	

	
	return 0;
}