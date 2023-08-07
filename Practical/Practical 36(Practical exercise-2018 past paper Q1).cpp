#include<iostream>
using namespace std;

int main()
{
	string name;
	cout <<"Username : ";
	cin>>name;
	for(int i=0;i<3;i++)
	{
		int num;
		cout<<"Password : ";
		cin>>num;
		
		if(num>1000 && num<9999)
		{
			cout<<"Your data is correct! Loading..... Please wait....... "<<endl;
			system("PAUSE");
			cout<<endl;
			cout<<"Welcome "<<name<<endl;
			cout<<"This is a program platform"<<endl;
			goto end;
		}
		else
		{
			cout<<"Wrong password! Re-enter......"<<endl;
			cout<<endl;
		}
		
	}
	end:
	return 0;
}
