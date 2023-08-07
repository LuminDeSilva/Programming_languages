#include<iostream>
using namespace std;

int main ()
{
	
	string fullname="Dark Angel";
	int arraysize=fullname.size();
	//int arraysize=
	/*print
		frist name : Dark
		last name : Angel
		*/
		
	cout<<"First Name : ";
		
	for (int i=0;i<arraysize;i++)
	{
		if (fullname.at(i)==' ')
		{
			cout<<"\nLast Name : ";
			continue;
		}
		cout<<fullname[i];
	}
	
	
	
	
	return 0;
 }
