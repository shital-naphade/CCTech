#include <iostream>  
using namespace std;
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}  
int main()  
{  
    int a=20,b=10;
    int *ptr1=&a,*ptr2=&b; 
    cout<<"Before swap: *ptr1="<<*ptr1<<" *ptr2="<<*ptr2<<endl;    
    swap(*ptr1,*ptr2);
    // ∗p1=∗p1+∗p2;    
    // ∗p2=∗p1-∗p2;    
    // ∗p1=∗p1-∗p2;    
    cout<<"After swap: *ptr1="<<*ptr1<<" *ptr2="<<*ptr2<<endl;    
    return 0;  
}  