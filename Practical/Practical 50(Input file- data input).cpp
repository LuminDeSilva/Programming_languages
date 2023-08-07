#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    //File exist(have) in the same location of c++ program
    ifstream inputFileStream;
    inputFileStream.open("InputText1.txt");
    string name,regno,sex,address;
    int age;
    if(inputFileStream.is_open())
    {
        cout<<"FIle is open!"<<endl;
        inputFileStream>>name;
        inputFileStream>>age;
        inputFileStream>>regno;
        inputFileStream>>sex;
        inputFileStream>>address;
    }
    else
    {
        cout<<"File is not open!"<<endl;
    }

    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
    cout<<"Reg. no. : "<<regno<<endl;
    cout<<"Sex : "<<sex<<endl;
    cout<<"Address : "<<address<<endl;

    ofstream outputFileStream;
    outputFileStream.open("InputText2.txt");

    outputFileStream<<"Name : "<<name<<endl;
    outputFileStream<<"Age : "<<age<<endl;
    outputFileStream<<"Reg. no. : "<<regno<<endl;
    outputFileStream<<"Sex : "<<sex<<endl;
    outputFileStream<<"Address : "<<address<<endl;

    outputFileStream.close();
    inputFileStream.close();




    return 0;
}
