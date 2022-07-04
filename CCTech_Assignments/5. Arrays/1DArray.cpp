#include<iostream>
using namespace std;

int main()
{
    int arr[5]={3,6,4,2,8};
    // for(int i=0;i<5;i++)
    // {
    //     cout<<arr[i]<<"\n";
    // }

    for(int x : arr)
        cout<<x<<"\n";
    return 0;
}