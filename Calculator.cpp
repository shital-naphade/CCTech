#include<iostream>
using namespace std;
template <class T>
class Calculator
{
    private:
            T num1,num2;
    public:
            Calculator(T n1,T n2)
            {
                num1=n1;
                num2=n2;
            }
            T add()
            {
                 return num1+num2;
            }
            T sub()
            {
                return num1-num2;
            }
            T mul()
            {
                return num1*num2;
            }
            T div()
            {
                return num1/num2;
            }
};
int main()
{
    int n1,n2,ch;
    while(1)
    {
        cout<<"\nEnter two numbers : ";
        cin>>n1>>n2;
        Calculator<int> type(n1,n2);
        cout<<"1. Addition(+) \n2. Substraction(-) \n3. Multiplication(*) \n4. Division(/) \n5. Exit ";
        cout<<"\nEnter your choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                    cout<<"Addition = "<<type.add();
                    break;
            case 2:
                    cout<<"Subtraction = "<<type.sub();
                    break;
            case 3:
                    cout<<"Multiplication = "<<type.mul();
                    break;
            case 4:
                    if(n2 != 0)
                        cout<<"Division = "<<type.div();
                    break;
            case 5:
                    exit(0);
            default:
                    cout<<"Invalid choice ";
                    break;
        }
    }
    
}