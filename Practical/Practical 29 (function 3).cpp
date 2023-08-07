#include<iostream>
using namespace std;

bool isVowel(char character)
{
	bool vol=character=='a'||character=='e'||character=='i'||character=='o'||character=='u'||character=='A'||character=='E'||character=='I'||character=='O'||character=='U';
	if(vol==true)
	{
		cout<<"The character is a vowel"<<endl;
	}
	else
	{
		cout<<"The character is not a vowel"<<endl;
	}
	return vol;
}

int main()
{
	char ch;
	cout<<"Enter the character : ";
	cin>>ch;
	cout<<endl;
	cout<<isVowel(ch)<<endl;
	
	
	
	return 0;
}
