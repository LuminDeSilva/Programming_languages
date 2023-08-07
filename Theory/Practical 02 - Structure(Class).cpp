#include<iostream>
using namespace std;

struct student{
	string name;
	short age;
	int total;
	
	void getDetail()
	{
		cout<<"Name "<<name<<endl;
		cout<<"Age "<<age<<endl;
		cout<<"Total "<<total<<endl;		
	}
	
	void setName(string s)
	{
		name =s;
	}
}; 



int main()
{
	cout<<"Struct Example"<<endl;
	cout<<endl;
	
	struct student s,t;
	s.name="David";
	s.age=27;
	s.total=5000;
	t.name="Anna";
	t.age=25;
	t.total=3000;
	
	s.getDetail();
	cout<<endl;
	s.setName("Adams");
	cout<<endl;
	s.getDetail();
	cout<<endl;
	t.getDetail();
		
	
	
	return 0;
}
