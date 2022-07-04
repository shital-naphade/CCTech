#include<iostream>
using namespace std;

int main()
{
    for(int i=1;i<=10;i++)
    {
        if( i == 8)
            break; //break is used to break loop. It breaks the current flow of the program at the given condition. In case of inner loop, it breaks only inner loop.
        cout<<i<<" ";
    }
    
    return 0;
}