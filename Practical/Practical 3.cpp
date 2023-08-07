#include<iostream>
#include<sstream>
using namespace std;

int main()
{
	string hello="456";
	int nam;
	stringstream(hello)>>nam;
	cout<<"hello = "<<hello+hello<<endl;
	cout<<"nam = " <<nam+nam<<endl;
	
	
	
	
	return 0;
}
