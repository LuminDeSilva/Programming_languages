#include <iostream>
using namespace std;

void findCalOnArray(int arr[],int sizeofarr,int &sum,double &average,int &min,int &max)
{ 
	cout<<"Enter the size you need for the array : ";
	cin>>sizeofarr;
	arr[sizeofarr];
	sum=0;
	
	max=0;
	//min=0;
	//int val;
	for(int i=0;i<sizeofarr;i++)
	{
		cout<<"Enter the element "<<i+1<<" : ";
		cin>>arr[i];
		//arr[i]=val;
		sum=sum+arr[i];
		if(arr[i]>max)
			max=arr[i];
			
		if(arr[i]<=min)
			min=arr[i];	
	}
	average=sum/sizeofarr;
	
}

int main()
{
	int num;
	//cout<<"Enter the size you need for the array : ";
	//cin>>sizeofarr;
	int array[num],summation,minimum,maximum;
	double average;
	
	findCalOnArray(array,num,summation,average,minimum,maximum);
	cout<<"Summation : "<<summation<<endl;
	cout<<"Maximum : "<<maximum<<endl;
	cout<<"Minimum : "<<minimum<<endl;
	cout<<"Average : "<<average<<endl;
	
	
	
	return 0;
}
