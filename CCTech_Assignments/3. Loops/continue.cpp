#include<iostream>
using namespace std;

int main()
{
    for(int i=1;i<=10;i++)
    {
        if( i == 6)
            continue; //It continues the current flow of the program and skips the remaining code at specified condition. In case of inner loop, it continues only inner loop.
        cout<<i<<" ";
    }

    return 0;
}