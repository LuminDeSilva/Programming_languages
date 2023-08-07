#include<iostream>
using namespace std;

int main()
{
	//declaration of pointer to pointer, pointer and variable 
	int **ptrptr,*ptr,num;
	//assign address of another pointer to pinter to pointer
	ptrptr=&ptr;
	//assign address of variable numm to the pointer ptr
	ptr=&num;
	//initialize the variable num
	num=55;
	
	cout<<"Value of variable num : "<<num<<endl;
	cout<<"Address of variable num : "<<&num<<endl;
	cout<<"The address stored on pointer ptr : "<<ptr<<endl;
	cout<<"Value of ponter ptr points : "<<*ptr<<endl;
	cout<<"The address stored on the pointer to pointer ptrptr : "<<ptrptr<<endl;
	cout<<"The value of the pointer to pointer : "<<*ptrptr<<endl;
	cout<<"The value the pointer to pointer points : "<<**ptrptr<<endl;
	
	
	
	return 0;
}
