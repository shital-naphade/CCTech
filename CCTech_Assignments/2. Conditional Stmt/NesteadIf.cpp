#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers : ";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
            cout<<a<<" is greater";
        else 
            cout<<c<<" is greater";
    }
    else
    {
        if(b>c)
            cout<<b<<" is greater";
        else    
            cout<<c<<" is greater";
    }
    return 0;
}