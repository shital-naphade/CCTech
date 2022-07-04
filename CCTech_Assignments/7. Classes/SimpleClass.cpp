#include <iostream>  
using namespace std;  

class Employee  
{  
    string name;
    int age;
    public:  
        Employee()    
        {    
            cout<<"Default Constructor Invoked"<<endl;    
        }    
        Employee(string name,int age)
        {
            cout<<"Parameterized Constructor Invoked"<<endl;
            this->name=name;
            this->age=age;
        }
        Employee(Employee &e)
        {
            cout<<"Copy Constructor Invoked"<<endl;
            name=e.name;
            age=e.age;
        }
        void display()
        {
            cout<<"\nName of employee = "<<name;
            cout<<"\nAge= "<<age;
        }
        ~Employee()
        {
            cout<<"\nDestructor Invoked"<<endl;    
        }
};  
int main(void)   
{  
    //creating an object of Employee 
    Employee e1;   //default constructor 
    Employee e2("Shital",26);   //parameterized constructor 
    Employee e3(e2); //Copy constructor
    e1.display();
    e2.display();
    e3.display();
    return 0;  
}  
/*OUTPUT
Default Constructor Invoked      
Parameterized Constructor Invoked
Copy Constructor Invoked

Name of employee =
Age= 1996606656
Name of employee = Shital
Age= 26
Name of employee = Shital
Age= 26
Destructor Invoked

Destructor Invoked

Destructor Invoked

*/