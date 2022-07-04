#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a=10,b=20;
    cout<<"Before swapping a = "<<a<<" b = "<<b;
    swap(a,b); //original value is not modified.
    cout<<"\nAfter swapping a = "<<a<<" b = "<<b;
    return 0;
}