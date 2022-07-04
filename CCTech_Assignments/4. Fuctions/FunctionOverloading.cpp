#include <iostream> 
using namespace std;

int sum(int a,int b)
{
    return a+b;
}
float sum(float x,float y)
{
    return x+y;
}
float sum(int a,float b,int c)
{
    return a+b+c;
}

int main()
{
    cout<<"Sum  = "<<sum(20,10)<<endl;
    cout<<"Sum  = "<<sum(20.2f,5.5f)<<endl;
    cout<<"Sum  = "<<sum(4,3.7f,10)<<endl;
   
    return 0;
}
