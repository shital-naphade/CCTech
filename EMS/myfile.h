#include<fstream>
#include<iostream>
#include<iomanip>
#include "employee.h"
using namespace std;

//Creating class for storing data into file
class File
{
    fstream file;
    public:
        void writeFile();
        void readFile();
        void deleteRecord(char id);
        void searchForRecord(char id);
        void updateRecord(char id);
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
    file<<e1.getEmpid()<<setw(15)<<e1.getEname()<<setw(20)<<e1.getEmail()<<setw(15)<<e1.getContact()<<setw(15)<<e1.getSalary()<<setw(20)<<e1.getDesignation();
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
    fout.open("temp.txt",ios::out);
    string myText;
    while(getline(file, myText))
    {
        if(myText[0] != id)
            fout<<myText<<endl;
    }
    file.close();
    fout.close();
    remove("Employee.txt");
    rename("temp.txt","Employee.txt");
}

//Function for search record in file
void File::searchForRecord(char id)
{
    
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
void File::updateRecord(char id)
{
    string name,email,contact,designation;
    double salary;
    file.open("Employee.txt",ios::in);  
    string myText;
    while (getline(file, myText))
    {
        if(myText[0] == id)
        {
            cout<<"Enter employee info : ";
            cin>>name>>email>>contact>>salary>>designation;
        }
    }
    file.close();
}