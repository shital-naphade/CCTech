#include <iostream>  
using namespace std;  

int main()  
{  
    int num=10;    
    int *p;     
    p=&num; //stores the address of number variable    
    cout<<"Address of num variable is : "<<&num<<endl;   
    cout<<"Value of num variable is : "<<num<<endl; 
    cout<<"Address of p variable is : "<<p<<endl;    
    cout<<"Value of p variable is : "<<*p<<endl;    
    return 0;  
}  