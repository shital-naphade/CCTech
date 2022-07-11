#include<iostream>  
#include<fstream>
using namespace std;  

#define max 20
int num;

class Employee  
{  
    int empid;
    string ename;
    string email;
    long int contact;
    double salary;
    string designation;
    string department;
    
    public:  
        Employee()    
        {

        }
        Employee(int empid,string ename,string email,long int contact,double salary,string designation,string department)
        {
            cout<<"Parameterized Constructor Invoked"<<endl;
            this->empid=empid;
            this->ename=ename;
            this->email=email;
            this->contact=contact;
            this->salary=salary;
            this->designation=designation;
            this->department=department;
        }
        
        void insert()
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
                cout<<"Enter department : "<<endl;
                cin>>department;            
        }
        void deleteRecord()
        {

        }
        void update()
        {
            
        }
        void search()
        {
            
        }
        void display()
        {
            cout<<empid<<"\t"<<ename<<"\t"<<email<<"\t"<<contact<<"\t"<<salary<<"\t"<<designation<<"\t"<<department<<endl;
        }
};  

int main(void)   
{  
    //creating an object of Employee 
    //fstream file("employee",ios::in|ios::out|ios::ate);
    Employee e1;
    Employee e[max];
    int ch,num;
    while(1)
    {
        cout<<"----------------------------------------"<<endl;
        cout<<"\tEmployee Management System"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"1. Add new employee\n2. Delete record of a particular employee\n3. Update record of an employee\n4. Search record for particular ID\n5. Display all employees\n6. Exit"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"Enter your choice : "<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
                    cout<<"Enter number of employees you have to add : "<<endl;
                    cin>>num;
                    for(int i=0;i<num;i++)
                    {
                        e[i].insert();
                    }
                    break;
            case 2:
                    e1.deleteRecord();
                    break;
            case 3:
                    e1.update();
                    break;
            case 4:
                    e1.search();
                    break;
            case 5:
                    cout<<"--------------------------------------------------------------------"<<endl;
                    cout<<"Empid\tEname\tEmail\tContact\tSalary\tDesignation\tDepartment"<<endl;
                    cout<<"--------------------------------------------------------------------"<<endl;
                    for(int i=0;i<num;i++)
                    {
                        e[i].display();
                    }
                    break;
            case 6:
                    exit(0);
        }
    }
    return 0;  
}  
