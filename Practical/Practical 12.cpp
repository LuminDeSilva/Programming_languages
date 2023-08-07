#include <iostream>

using namespace std;

int main()
{
	/*
	int counter=0;
	while(true)
	{
		
		cout<<"Counter :\t"<<counter<<endl;
		if(counter==40)
			break;
		counter++;
	}
	*/
	/*
	int evensum=0,number;
	
	
	while(true)
	{
		cout<<"Enter the number\t:\t";
		cin>>number;
		
		if(number%2==1)
		{
			cout<<"You have entered an odd number!"<<endl;
			break;
			
		}
		evensum+=number;
	}
	cout<<"Sum of even number\t:\t"<<evensum<<endl;
	
	*/
//	
//		int evensum=0,number;
//	
//	
//	while(true)
//	{
//		cout<<"Enter the number\t:\t";
//		cin>>number;
//		
//		if(number%2==1)
//		{
//			cout<<"You have entered an odd number!"<<endl;
//			break;
//			
//		}
//		else if(number==0)
//		{
//			cout<<"You entered zero. Program terminated!"
//			return 0;
//		}
//		evensum+=number;
//	}
//	cout<<"Sum of even number\t:\t"<<evensum<<endl;
	
		
//	int oddsum=0,number;
//	
//	READAGAIN:
//	while(true)
//	{
//		cout<<"Enter the number\t:\t";
//		cin>>number;
//		
//		if(number%2==0 && number>0)
//		{
//			cout<<"You have entered an odd number!"<<endl;
//			goto READAGAIN;
//			
//		}
//		else if(number==0)
//		{
//		
//			goto PRINTSUM;
//		}
//		else if(number<0)
//		{
//			cout<<"You entered negative number. Program is terminated!";
//			goto EXITPRO;
//		}
//		oddsum+=number;
//	}
//	PRINTSUM:
//		cout<<"Sum of odd numbers\t:\t"<<oddsum<<endl;
//	EXITPRO:
//		


	float sum=0,number,counter=0;
	
	
	while(true)
	{
		cout<<"Enter the number "<<(counter+1)<<"\t:\t";
		cin>>number;
		
		if(number<0)
		{
			goto PRINTAVG;
			
		}
		sum+=number;
		counter++;
	}
	PRINTAVG:
		cout<<"Average of the numbers\t:\t"<<sum/counter<<endl;
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
