#include<iostream>

using namespace std;

int main()
{
	/*
	for(int i=0;i<10;i++)
	{
		cout<<"i:"<<i<<endl;
		if(i==5)
			break;
	}
	cout<<"End of Loop"<<endl;

	for(int i=0;i<10;i++)
	{
		if(i==5)
			break;
		cout<<"i:"<<i<<endl;
	
	}
	cout<<"End of Loop"<<endl;	
	
	
	
	for(int i=0;i<10;i++)
	{
	
		cout<<"i:"<<i<<endl;
		for(int k=0;k<5;k++)
		{
			cout<<"\tk:"<<k<<endl;
			if(k==3)
				break;
		}
		cout<<"End of Inner-loop"<<endl;
	
	}
	cout<<"End of Loop"<<endl;	
	
	
	int x,sum=0;
	cout<<"Enter the values"<<endl;
		for(int i=1;i<10;i++)
	{
		cout<<"Entere number "<<i<<" : "<<endl;
		cin>>x;
		if(x%2==0)
		{
			cout<<"You hav entered an even number! Program id terminated!"<<endl;
			break;
		}
		sum=sum+x;
	}
	
	cout<<"Sum of odd numbers : "<<sum<<endl;	
	
	*/
	for(int i=0;i<10;i++)
	{
		
		if(i%2==1)
			continue;
		cout<<"i:"<<i<<endl;
	}
	cout<<"End of Loop"<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
