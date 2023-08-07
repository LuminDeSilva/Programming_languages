#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    //File exist(have) in the same location of c++ program
    ifstream inputFileStream;
    inputFileStream.open("InputText.txt");
    if(inputFileStream.is_open())
    {
        cout<<"FIle is open!"<<endl;
    }
    else
    {
        cout<<"File is not open!"<<endl;
    }


    /*
    //File doesn't exit (doesn't have)
    ifstream inputFileStream_1;
    inputFileStream_1.open("InputText1.txt");
    if(inputFileStream_1.is_open())
    {
        cout<<"FIle is open!"<<endl;
    }
    else
    {
        cout<<"File is not open!"<<endl;
    }
    */



    return 0;
}
