#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;

struct Student
{
    string name,regno;
    char sex;
    int age,yearofstudy;

    printstudent(ofstream& outputstream)
    {
        cout<<"Regno : "<<regno<<"\tName : "<<name<<"\tSex : "<<sex<<"\tAge : "<<age<<"\tYear of study : "<<yearofstudy<<endl;
    }

    printstudent()
    {
        cout<<"Regno : "<<regno<<"\tName : "<<name<<"\tSex : "<<sex<<"\tAge : "<<age<<"\tYear of study : "<<yearofstudy<<endl;
    }
};

int main()
{

    Student students[10];int counter=0;
    ifstream inputfilestream;string line;
    inputfilestream.open("students.txt");
    if(inputfilestream.is_open())
    {
        cout<<"File is open!"<<endl;
        while(getline(inputfilestream,line))
        {
            stringstream mystream(line);
            mystream>>students(counter).name;
            mystream>>students(counter).regno;
            mystream>>students(counter).sex;
            mystream>>students(counter).yearofstudy;
            mystream>>students(counter).age;
            counter++;
        }
    }
    else
        cout<<"File is not open!"<<endl;



    for(Student student:students)
    {
        student.printstudent();
    }

    //list or display the detail of male students who study in third year
    ofstream outputfilestream();
    outputfilestream.open("outputstudents.txt");
    for(Student student:students)
    {
        if(student.sex=='M'&&student.yearofstudy==3)
            //student.printstudent()
            cout<<"Regno : "<<student.regno<<"\tName : "<<student.name<<"\tSex : "<<student.sex<<"\tAge : "<<student.age<<"\tYear of study : "<<student.yearofstudy<<endl;

    }

    //List of display th details of the youngest female student
    int minage=student[0].age;
    Student youngest=students[0];
    for(Student student:students)
    {
        if(student.sex=='F'&&student.age<minage)
        {
            minage=student.age;
            youngest=student;
        }
    }

    youngest.printstudent(outputfilestream);

    //List or display the details of the second year youngest male students;


    outputfilestream.close();








    inputfilestream.close();



    return 0;
}
