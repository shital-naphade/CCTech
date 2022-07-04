#include<iostream>
using namespace std;
int fact(int n)
{
    if(n == 0)
        return 1;
    else    
        return n*fact(n-1); // function calls the same function is recusion
}
int main()
{
    int num;
    cout<<"Enter any number  : ";
    cin>>num;
    cout<<"FActorial of "<<num<<" is = "<<fact(num);
    return 0;
}   