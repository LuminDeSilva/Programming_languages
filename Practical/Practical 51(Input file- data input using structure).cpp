#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

struct Address
    {
        string str_name,city,province;

    };

 struct Employee
    {
        string fullName,sex;
        int age;
        double salary;
        Address address;
    };



    Address readaddress(Address address)
        {
            cout<<"Enter the street name : ";
            cin>>address.str_name;
            cout<<"Enter the city name : ";
            cin>>address.city;
            cout<<"Enter the province : ";
            cin>>address.province;
            cout<<endl;
            return address;
        }

    Employee reademployee(Employee emp)
        {
            cout<<"Enter employee name : ";
            cin>>emp.fullName;
            cout<<"Enter employee age : ";
            cin>>emp.age;
            cout<<"Enter employee sex : ";
            cin>>emp.sex;
            cout<<"Enter employee salary : ";
            cin>>emp.salary;
            emp.address=readaddress(emp.address);
            return emp;
        }


    void printaddress(Address address)
        {
            cout<<"Street : "<<address.str_name<<endl;
            cout<<"City : "<<address.city<<endl;
            cout<<"Province : "<<address.province<<endl;
            cout<<endl;
        }

    void printemployee(Employee emp)
        {
            cout<<"Emp. name : "<<emp.fullName<<endl;
            cout<<"Age : "<<emp.age<<endl;
            cout<<"Sex : "<<emp.sex<<endl;
            cout<<"Salary : "<<emp.salary<<endl;
            printaddress(emp.address);
        }

int main()
{
   Employee emps[5];int counter=0;
   ifstream inputFileStream;
   string line;
   inputFileStream.open("Employee.txt");
   if(inputFileStream.is_open())
   {
       cout<<"File is open!"<<endl;
       while(getline(inputFileStream,line))
       {
           cout<<line<<endl;
           stringstream mystream(line);
           mystream>>emps[counter].fullName;
           mystream>>emps[counter].age;
           mystream>>emps[counter].sex;
           mystream>>emps[counter].salary;
           mystream>>emps[counter].address.str_name;
           mystream>>emps[counter].address.city;
           mystream>>emps[counter].address.province;
           counter++;
       }
   }
   else
   {
       cout<<"File is not open"<<endl;
   }

   for(Employee emp:emps)
   {
       printemployee(emp);
   }


    return 0;
}
