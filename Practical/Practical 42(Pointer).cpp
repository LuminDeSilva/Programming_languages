#include<iostream>
using namespace std;

int main()
{
	
	int intVal;
	int dVal;
	char charVal[4];
	bool boolVal;
	
	cout<<"Address of the intVal : "<<&intVal<<endl;
	cout<<"Address of the dVal : "<<&dVal<<endl;
	cout<<"Address of the charVal : " <<&charVal<<endl;
	cout<<"Address of the boolVal : "<<&boolVal<<endl;
	
	cout<<endl;
	
	//declaration of pointer
	int *ptr,num;
	//assign address of variable num
	ptr=&num;
	//assign a value to variable num
	num=76;
	
	cout<<"Value of num : "<<num<<endl;		//76   
	cout<<"Address of variable num : "<<&num<<endl;
	cout<<"The value(address) stored in the pointer ptr : "<<ptr<<endl;
	cout<<"Thw value the pointer points to : "<<*ptr<<endl;		//76
	
	cout<<endl;
	
	*ptr=60;		//change the value of the pointer 
	
	cout<<"Value of num : "<<num<<endl;		//60   
	cout<<"Address of variable num : "<<&num<<endl;
	cout<<"The value(address) stored in the pointer ptr : "<<ptr<<endl;
	cout<<"Thw value the pointer points to : "<<*ptr<<endl;		//60
	
	cout<<endl;
	
	num=100;		//change the value of the num
		
	cout<<"Value of num : "<<num<<endl;		//100   
	cout<<"Address of variable num : "<<&num<<endl;
	cout<<"The value(address) stored in the pointer ptr : "<<ptr<<endl;
	cout<<"Thw value the pointer points to : "<<*ptr<<endl;		//100
			
	
	
	return 0;
}
