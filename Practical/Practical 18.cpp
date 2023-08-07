#include<iostream>
using namespace std;

int main ()
{
	
	char fullname[]="Dark Angel";
	int arraysize=sizeof(fullname)/sizeof(fullname[0]);
	//int arraysize=
	/*print
		frist name : Dark
		last name : Angel
		*/
		
	cout<<"First Name : ";
		
	for (int i=0;i<arraysize;i++)
	{
		if (fullname[i]==' ')
		{
			cout<<"\nLast Name : ";
			continue;
		}
		cout<<fullname[i];
	}
	
	
	
	
	return 0;
 } 
