#include<iostream>
#include<iomanip>
using namespace std;
class Employee
{  
    int empid;
    string ename;
    string email;
    string contact;
    double salary;
    string designation;
    //Department d;
    
    public:  
        // Employee()
        // {}
        // Employee(int empid,string ename,string email,string contact,double salary, string designation)
        // {
        //     this->empid=empid;
        //     this->ename=ename;
        //     this->email=email;
        //     this->contact=contact;
        //     this->salary=salary;
        //     this->designation=designation;
        // }
        void setEmployee();
        int getEmpid();
        string getEname();
        string getEmail();
        string getContact();
        double getSalary();
        string getDesignation();
};
void Employee::setEmployee()
{
    cout<<"Enter employee id : "<<endl;
    cin>>empid;
    cout<<"Enter name : "<<endl;
    cin>>ename;
    cout<<"Enter email : "<<endl;
    cin>>email;
    cout<<"Enter contact number : "<<endl;
    cin>>contact;
    cout<<"Enter salary : "<<endl;
    cin>>salary;
    cout<<"Enter designation of employee : "<<endl;
    cin>>designation;      
}
int Employee::getEmpid()
{
    return empid;
}
string Employee::getEname()
{
    return ename;
}
string Employee::getEmail()
{
    return email;
}
string Employee::getContact()
{
    return contact;
}
double Employee::getSalary()
{
    return salary;
}
string Employee::getDesignation()
{
    return designation;
}

