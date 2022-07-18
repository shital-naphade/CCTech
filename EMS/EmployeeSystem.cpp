#include<iostream>  
#include<fstream>
#include<iomanip>
#include "myfile.h"
using namespace std;  

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
                    cout<<"Enter empid to update record : ";
                    cin>>id;
                    f.updateRecord(id);
                    break;
            case 4:
                    cout<<"Enter empid to search record : ";
                    cin>>id;
                    f.searchForRecord(id);
                    break;
            case 5:
                    cout<<"--------------------------------------------------------------------------------------------"<<endl;
                    cout<<setw(5)<<"Empid"<<setw(10)<<"Ename"<<setw(20)<<"Email"<<setw(15)<<"Contact"<<setw(15)<<"Salary"<<setw(20)<<"Designation"<<endl;
                    cout<<"--------------------------------------------------------------------------------------------"<<endl;
                    f.readFile(); 
                    break;
            case 6:
                    exit(0);
        }
    }
    return 0;  
}  
