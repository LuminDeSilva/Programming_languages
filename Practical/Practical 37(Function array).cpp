#include<iostream>
using namespace std;

double findsum(int a[],int size)
{
	double sum=0;
	for(int i=0;i<size;i++)
	{
		sum=sum+a[i];
	}
	return sum;
}

double findaverage(int a[],int size)
{
	return findsum(a,size)/size;
}

double findmin(int a[],int size)
{
	int min=a[0];
	for(int i=1;i<size;i++)
	{
		if(min>a[i])
			min=a[i];
	}
	return min;
}

double findmax(int a[],int size)
{
	int max=a[0];
	for(int i=1;i<size;i++)
	{
		if(max<a[i])
			max=a[i];
	}
	return max;
	
}

int main()
{
	int arrsize;
	cout<<"Enter the size of the array : ";
	cin>>arrsize;
	int arr[arrsize];
	for(int i=0;i<arrsize;i++)
	{
		cout<<"Enter element ["<<(i+1)<<"] : ";
		cin>>arr[i];
	}
	cout<<"Summation of the array : "<<findsum(arr,arrsize)<<endl;
	cout<<"Average of the array : "<<findaverage(arr,arrsize)<<endl;
	cout<<"Minimum of the array : "<<findmin(arr,arrsize)<<endl;
	cout<<"Maximum of the array : "<<findmax(arr,arrsize)<<endl;
	
	
	
	return 0;
}
