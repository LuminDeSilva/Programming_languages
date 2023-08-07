#include<iostream>
#include<string>
using namespace std;

void findVowel(string x)
{
	int a=0,e=0,i=0,o=0,u=0;
	for(int j=0;j<x.length();j++)
	{
		if(x[j]=='a')
		{
			a++;
		}
		if(x[j]=='e')
		{
			e++;
		}
		if(x[j]=='i')
		{
			i++;
		}
		if(x[j]=='o')
		{
			o++;
		}
		if(x[j]=='u')
		{
			u++;
		}
	}
	if(a!=0)
	{
		cout<<"\'a\' count is "<<a<<endl;
	}
	if(e!=0)
	{
		cout<<"\'e\' count is "<<e<<endl;
	}
	if(i!=0)
	{
		cout<<"\'i\' count is "<<i<<endl;
	}
	if(o!=0)
	{
		cout<<"\'o\' count is "<<o<<endl;
	}
	if(u!=0)
	{
		cout<<"\'u\' count is "<<u<<endl;
	}
	
	cout<<"Total vowel : "<<a+e+i+o+u<<endl;
}

char pattern(string shape,int length,string symbol)
{
	char z;
	if(shape == "square")
	{
		for(int i=0;i<length;i++)
		{
			for(int j=0;j<length;j++)
			{
				cout<<symbol<<" ";
			}
			cout<<endl;
		}
	}
	
	if(shape == "triangle")
	{
		for(int i=0;i<length;i++)
		{
			for(int j=0;j<i+1;j++)
			{
				cout<<symbol<<" ";
			}
			cout<<endl;
		}
	}

	return z;
}


int main()
{
	string s;
	cout<<"\nEnetr the word : ";
	cin>>s;
	findVowel(s);
	
	string shape,symbol;
	int length;
	cout<<"\nEnter the symbol : ";
	cin>>symbol;
	cout<<"Enter the shape : ";
	cin>>shape;
	cout<<"Enter the length : ";
	cin>>length;
	cout<<pattern(shape,length,symbol);
	
	return 0;
	
}