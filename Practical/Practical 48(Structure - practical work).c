#include<iostream>
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
        Address street;
    };



    Address readaddress(Address address)
        {
            cout<<"Enter the city name : ";
            cin>>address.str_name;
            cout<<"Enter the city name : ";
            cin>>address.city;
            cout<<"Enter the province : ";
            cin>>address.province;
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
   Employee emps[5];
   for(int i=0;i<5;i++)
   {
       emps[i]=reademployee(emps[i]);
   }

   for(Employee emp:emps)
   {
       printemployee(emp);
   }



    return 0;
}
