#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;


int main()
{
	int winningDigits[8],playerInput[8];
	srand(time(NULL));
	for(int i=0;i<8;i++)
	{
		winningDigits[i]=rand()%10;
	}
	for(int i=0;i<8;i++)
	{
		back:
		cout<<"Please enter the assumed number "<<i+1<<" : ";
		cin>>playerInput[i];
		if(playerInput[i]<0 || playerInput[i]>9)
		{
			cout<<"Enter a number in between 0 and 9"<<endl;
			goto back;
		}
	}
	cout<<endl;
	cout<<"Winning  Digits : ";
	for(int i=0;i<8;i++)
	{
		cout<<winningDigits[i]<<" ";					
	}
	cout<<endl;
	
	cout<<"Player Digit : ";
	for(int i=0;i<8;i++)
	{
		cout<<playerInput[i]<<" ";
	}
	cout<<endl;
	
	cout<<endl;
	int count=0,guess=0;
	for(int i=0;i<8;i++)
	{
		if(winningDigits[i]==playerInput[i])
		{
			count++;
			cout<<"The number "<<winningDigits[i]<<" is assumed correctly"<<endl;
			cout<<"The number is "<<count<<" situated"<<endl;
			guess++;
		}
		count++;
	}
	cout<<endl;
	cout<<"The number of guesses are correct is "<<guess<<endl;
	
	
	
	
	
	return 0;
}