#include <iostream>
using namespace std;
//Inline function is a function that is expanded in line when it is called
inline int area(int r)
{
    return 3.14*r*r;
}
int main()
{
    int rad;
    cout<<"Enter radius of circle : ";
    cin>>rad;
    cout << "Area of circle : " << area(rad) << "\n";
    return 0;
} 