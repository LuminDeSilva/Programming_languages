#include<iostream>
using namespace std;


int main()
{
	int arr1[10]={45,56,67,78,89,90,98,0,0,0};
	int arr2[10];
	for(int i=0;i<10;i++)
	{
		arr2[i]=arr1[i];
	}
	
	for(int i=0;i<10;i++)
	{
		cout<<arr2[i]<<" ";
	}
	cout<<endl;
	
	int max=0,min=arr2[0];
	for(int i=0;i<10;i++)
	{
		if(max<arr2[i])
		{
			max=arr2[i];
		}
		if(min>arr2[i])
		{
			min=arr2[i];
		}
	}
	cout<<"Maximum : "<<max<<"\tminimum : "<<min<<endl;
	
	int choice,output=-1,count=0;
	cout<<"Enter the elemnet you need to find in array1 : ";
	cin>>choice;
	for(int i=0;i<10;i++)
	{
		if(choice==arr1[i])
		{
			output=arr1[i];
			count++;
			break;
		}
		count++;
	}
	cout<<"The elemnet you enter is : "<<output<<"  position : "<<count<<endl;
	
	int flag=0;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			if(i==j)
			{
				continue;
			}
			else if(arr1[i]==arr1[j])
			{
				flag=1;
				break;
			}
		}
	}
	if(flag==1)
	{
		cout<<"The array element are not unique"<<endl;
	}
	else
	{
		cout<<"The array element are unique"<<endl;
	}
	
	return 0;
}