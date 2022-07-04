#include<iostream>
using namespace std;

int sum(int arr[])
{
    int s=0;
    cout<<"Array elements are : \n";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<"\n";
        s=s+arr[i];
    }
    return s;
}
int main()
{
    int arr[5]={3,6,4,2,8};
    cout<<"Sum of array elements : "<<sum(arr);
    return 0;
}