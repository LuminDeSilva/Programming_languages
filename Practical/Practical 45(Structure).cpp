#include<iostream>
using namespace std;

int main()
{
	/*
		Syntax of struct:
			struct structName
			{
				dataType1 identifier1;
				dataType2 identifier2;
				.
				.
				.
				dataTypen identifiern;
			};
			
			*The semi-colon is a part of the syntax
	*/
	
	struct Person
	{
		string name;
		int age;
		char sex;
		float weight;
		
	}person4,person5;
	
	struct Person person1,person2,person3;
	person1.name = "David";
	person1.age = 24;
	person1.sex = 'M';
	person1.weight = 64.23;
	
	person2.name = "Anna";
	person2.age = 22;
	person2.sex = 'F';
	person2.weight = 46.56;
	
	cout<<"The detail of person 1 : "<<endl;
	cout<<"\tName : "<<person1.name<<endl;
	cout<<"\tAge : "<<person1.age<<endl;
	cout<<"\tSex : "<<person1.sex<<endl;
	cout<<"\tWeight : "<<person1.weight<<endl;
	cout<<endl;
	
	
	cout<<"The detail of person 2 : "<<endl;
	cout<<"\tName : "<<person2.name<<endl;
	cout<<"\tAge : "<<person2.age<<endl;
	cout<<"\tSex : "<<person2.sex<<endl;
	cout<<"\tWeight : "<<person2.weight<<endl;
	cout<<endl;
	
	//assigning person
	person3=person1;
	
	
	cout<<"The detail of person 3 : "<<endl;
	cout<<"\tName : "<<person3.name<<endl;
	cout<<"\tAge : "<<person3.age<<endl;
	cout<<"\tSex : "<<person3.sex<<endl;
	cout<<"\tWeight : "<<person3.weight<<endl;
	cout<<endl;
	
	
	person4.name=person2.name;
	person4.age=person2.age;
	person4.sex=person2.sex;
	person4.weight=person2.weight;
	
	
	cout<<"The detail of person 4 : "<<endl;
	cout<<"\tName : "<<person4.name<<endl;
	cout<<"\tAge : "<<person4.age<<endl;
	cout<<"\tSex : "<<person4.sex<<endl;
	cout<<"\tWeight : "<<person4.weight<<endl;
	cout<<endl;
	
	cout<<endl;
	
	cout<<"*****Using array method*****"<<endl;
	cout<<endl;
	
	struct Person people[4];
	people[0]=person1;
	people[1]=person1;
	people[2]=person2;
	people[3]=person3;
	
	for(int i=0;i<4;i++)
	{
			cout<<"The detail of person "<<i+1<<" : "<<endl;
			cout<<"\tName : "<<people[i].name<<endl;
			cout<<"\tAge : "<<people[i].age<<endl;
			cout<<"\tSex : "<<people[i].sex<<endl;
			cout<<"\tWeight : "<<people[i].weight<<endl;
			cout<<endl;	
	}
	
	
	
	return 0;
}
