#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any vowel : ";
    cin>>ch;
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == '0' || ch == 'u')
        cout<<"User entered character is vowel ";
    else
        cout<<"User entered character is not vowel ";
    return 0;
}