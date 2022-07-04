#include<iostream>
using namespace std;
int main()
{
    int a,b,ch;
    while(1)
    {
        cout<<"\nEnter two numbers  : ";
        cin>>a>>b;
        cout<<"\nMenu\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n6. Exit";
        cout<<"\nEnter your choice : ";
        cin>>ch;
        
        switch(ch)
        {
            case 1:
                    cout<<"Addition = "<<a+b;
                    break;
            case 2:
                    cout<<"Subtraction = "<<a-b;
                    break;
            case 3:
                    cout<<"Multiplication = "<<a*b;
                    break;
            case 4:
                    cout<<"Division = "<<a/b;
                    break;
            case 5:
                    cout<<"Modulus = "<<a%b;
                    break;
            case 6 : 
                    exit(0);
            default:
                    cout<<"Invalid choice.....";
        }
    }
        
    return 0;
}