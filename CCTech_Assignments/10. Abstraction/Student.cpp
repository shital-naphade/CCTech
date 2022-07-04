#include<iostream>
using namespace std;
 
class Student
{
    private:
        int rollno;
        int age;
        string name;
   
    public:
        void set(int r,int a,string n)
        {
           rollno=r;
           age=a;
           name=n;
        }
   
        void display()
        {
            cout<<"Roll no. : "<<rollno<<endl<<"Name = "<<name<<endl<<"Age = "<<age;
        }
};
 
int main()
{
    Student s;
    s.set(111,27,"Shital");
    s.display();
    return 0;
}
