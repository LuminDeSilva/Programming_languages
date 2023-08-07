#include<iostream>
using namespace std;

int main()
{
	int num[5]={44,55,66,77,88}
	int *ptr=num;
	int *ptr1=&num[0];
	int *ptr2=&num[1];
	int *ptr3=&num[2];
	int *ptr4=&num[3];
	int *ptr5=&num[4];
	
	cout<<"*ptr1 : "<<*ptr1<<endl;
	cout<<"ptr : "<<*ptr<<endl;
	
	cout<<"*ptr2 : "<<*ptr2<<endl;
	cout<<"ptr+1 : "<<*(ptr+1)<<endl;
	
	cout<<"*ptr3 : "<<*ptr3<<endl;
	cout<<"ptr+2 : "<<*(ptr+2)<<endl;
	
	cout<<"*ptr4 : "<<*ptr4<<endl;
	cout<<"ptr+3 : "<<*(ptr+3)<<endl;
	
	cout<<"*ptr5 : "<<*ptr5<<endl;
	cout<<"ptr+4 : "<<*(ptr+4)<<endl;
	
	
	return 0;
}
