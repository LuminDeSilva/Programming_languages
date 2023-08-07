#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	start:
	int num;
	cout<<"Enter the number : ";
	cin>>num;
	
	if(num/1==num && num/num==1)
	{
		if(num/2==abs(num/2) || num/3==abs(num/3) || num/5==abs(num/5) || num/7==abs(num/7) || num/11==abs(num/11) || num/13==abs(num/13) || num/17==abs(num/17)  || num/19==abs(num/19))
		{
			if(num==2||num==3||num==5||num==7||num==11||num==13||num==17||num==19)
			{
				cout<<"A prime number"<<endl;
				goto start;
			}
			else
			{
				cout<<"Not a prime number"<<endl;
				goto start;
			}
		}
		else
		{
			cout<<"A prime number"<<endl;
			goto start;
		}
	}		
	
	
	return 0;
}
