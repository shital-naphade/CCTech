#include<iostream>  
#include<fstream>
#include<iomanip>
//#include"department.h"
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
        int getEmpid()
        {
            return empid;
        }
        string getEname()
        {
            return ename;
        }
        string getEmail()
        {
            return email;
        }
        string getContact()
        {
            return contact;
        }
        double getSalary()
        {
            return salary;
        }
        string getDesignation()
        {
            return designation;
        }
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

//Creating class for storing data into file
class File
{
    fstream file;
    public:
        void writeFile();
        void readFile();
        void deleteRecord(char id);
        void searchForRecord(char id);
};
//Function to write into file
void File::writeFile()
{
    Employee e1;
    // accepting the details from the user.
    e1.setEmployee();
    file.open("Employee.txt",ios::app);      
    if(file.fail())
    {
        cout<<"\nUnable to Open the File!!!";
    }
    //file.write((char*)&e1,sizeof(e1));         //writing into the file with fptr object.
    //file.write(str,sizeof(str));
    file<<setw(5)<<e1.getEmpid()<<setw(15)<<e1.getEname()<<setw(20)<<e1.getEmail()<<setw(15)<<e1.getContact()<<setw(15)<<e1.getSalary()<<setw(20)<<e1.getDesignation();
    file<<"\n";
    // if(file.tellp()%sizeof(e1)==0)
    // {
    //     cout<<"\nRecord Inserted !!!"<<endl;
    // }
    file.close();
}
//Function to read from file
void File::readFile()
{
    file.open("Employee.txt",ios::in);  
    string myText;
    while (getline(file, myText))
    {
        cout << myText<<"\n";
    }
    file.close();
}
//Function for delete record from file
void File::deleteRecord(char id)
{
    fstream fout;
    file.open("Employee.txt",ios::in);  
    fout.open("example.txt",ios::app);
    string myText;
    while(getline(file, myText))
    {
        if(myText[0] != id)
            fout<<"\n"<<myText;
    }
    fout.open("example.txt",ios::in);  
    string myText2;
    while (getline(file, myText2))
    {
        cout <<"\n"<< myText2;
    }
    rename("Employee.txt","example.txt");
    file.close();
    fout.close();
}
//Function for search record in file
void File::searchForRecord(char id)
{
    //read employee id
    // Employee x;
    // int id;
    // int isFound=0;
 
    // cout<<"Enter employee id: ";
    // cin>>id;

    // file.open("Employee.txt",ios::in);
    // if(!file){
    //     cout<<"ERROR IN OPENING FILE \n";
    //     return;
    // }
    // while(file){
    //     if(file.read((char*)&x,sizeof(x))){
    //         if(x.getEmpid()==id){
    //             cout<<"RECORD FOUND\n";
    //             //x.display();
    //             isFound=1;
    //             break;
    //         }
    //     }
    // }
    // if(isFound==0){
    //     cout<<"Record not found!!!\n";
    // }
    // file.close();

    file.open("Employee.txt",ios::in);  
    string myText;
    while (getline(file, myText))
    {
        if(myText[0] == id)
        {
            cout<<"\nRecord found";
            cout<<"\n"<<myText;
        }
    }
    file.close();
}
int main(void)   
{  
    //creating an object of Employee 
    File f;
    int ch;
    char id;
    while(1)
    {
        cout<<"\n-----------------------------------------------"<<endl;
        cout<<"\tEmployee Management System"<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<"1. Add new employee\n2. Delete record of a particular employee\n3. Update record of an employee\n4. Search record for particular ID\n5. Display all employees\n6. Exit"<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<"Enter your choice : "<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
                    f.writeFile();   
                    break;
            case 2:
                    cout<<"Enter empid to delete record : ";
                    cin>>id;
                    f.deleteRecord(id);
                    break;
            case 3:
                   
                    break;
            case 4:
                    cout<<"Enter empid to search record : ";
                    cin>>id;
                    f.searchForRecord(id);
                    break;
            case 5:
                    cout<<"--------------------------------------------------------------------------------------------"<<endl;
                    cout<<setw(5)<<"Empid"<<setw(15)<<"Ename"<<setw(20)<<"Email"<<setw(15)<<"Contact"<<setw(15)<<"Salary"<<setw(20)<<"Designation"<<endl;
                    cout<<"--------------------------------------------------------------------------------------------"<<endl;
                    f.readFile(); 
                    break;
            case 6:
                    exit(0);
        }
    }
    return 0;  
}  
