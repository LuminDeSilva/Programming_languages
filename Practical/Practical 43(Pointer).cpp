#include<iostream>
using namespace std;

int main()
{
	//Declare and initialize an array integers
	int nums[10]={34,56,78,90,43,76,89,98,32,21};
	
	cout<<*nums<<endl;		//34
	cout<<*(nums+1)<<endl;		//56		
	cout<<*(nums+2)<<endl;		//78
	cout<<*(nums+5)<<endl;		//76
	
	cout<<endl;
	
	int *asp;
	asp=nums;
	for(int i=0;i<10;i++)
	{
		cout<<"Address of nums["<<i<<"] : "<<asp<<endl;
		cout<<"Value of nums ["<<i<<"] : "<<*asp<<endl;
		//point to the next location in the array
		*asp++;
		
	}
	
	cout<<endl;
	
	cout<<"*asp : "<<*asp<<endl;
	*asp--;
	cout<<"*asp : "<<*asp<<endl;
	*asp--;
	cout<<"*asp : "<<*asp<<endl;
	*asp--;
	cout<<"*asp : "<<*asp<<endl;
	cout<<"*ptr : "<<*asp<<endl;
	
	cout<<"*asp : "<<asp<<endl;
	cout<<"*asp : "<<*(--asp)<<endl;
	cout<<"*asp : "<<*(++asp)<<endl;
	
	
	
	return 0;
}
