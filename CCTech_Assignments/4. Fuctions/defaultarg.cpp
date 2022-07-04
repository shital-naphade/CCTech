#include <iostream>
using namespace std;
int add(int a,int b, int c = 10,int d = 2) 
{ 
    return a+b+c+d; 
} 
int main() 
{
    // A function with default arguments, it can be called with
    // 2 arguments or 3 arguments or 4 arguments. 
    cout<<"\nAddition is = "<<add(10,20);
    cout<<"\nAddition is = "<<add(10,20,3);
    cout<<"\nAddition is = "<<add(10,20,3,4);
    return 0; 
}