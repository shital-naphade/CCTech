#include<iostream>
using namespace std;
 
class Person
{
    int age;
    string name;
   
    public:
        void setPerson()
        {
            cout<<"Enter the age:";
            cin>>age;
            cout<<"Enter the Name:";
            cin>>name;
        }
   
        void displayPerson()
        {
            cout<<"Name = "<<name<<endl<<"Age = "<<age;
        }
};
 
class Student: private Person
{
    string course;
    int fee;
     
    public:
    void setStudent()
        {
            setPerson();
            cout<<"Enter the Course Name:";
            cin>>course;
            cout<<"Enter the Course Fee:";
            cin>>fee;
        }
         
        void displayStudent()
        {
            displayPerson();
            cout<<"\nCourse = "<<course<<endl<<"Course Fee = "<<fee;
        }
};
 
int main()
{
    Student s;
    s.setStudent();
    s.displayStudent();
    return 0;
}
/* OUTPUT
Enter the age:26
Enter the Name:shital
Enter the Course Name:cdac
Enter the Course Fee:90000
Name = shital
Age = 12
Course = cdac
Course Fee = 90000

*/