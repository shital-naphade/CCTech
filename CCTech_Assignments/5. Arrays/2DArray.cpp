#include<iostream>
using namespace std;

int main()
{
    int arr[3][3];
    cout<<"Enter 3*3 matrix : ";
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>arr[i][j];
    
    cout<<"Two dimensional array elements are : \n";
     for(int i=0;i<3;i++)
     {
        for(int j=0;j<3;j++)
        {
          cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
     }
    return 0;
}