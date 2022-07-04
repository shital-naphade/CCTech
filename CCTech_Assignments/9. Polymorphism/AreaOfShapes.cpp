#include <iostream> 
using namespace std;
 
class Area 
{
   public:
        float area(int r)
        {
            return 3.14*r*r;
        }
        float area(float side)
        {
            return side*side;
        }
        int area(int l,int w)
        {
            return l*w;
        }
        float area(float b,float h)
        {
            return 0.5*b*h;
        }
};

int main()
{

    Area a;
    cout<<"Area of circle = "<<a.area(2)<<endl;
    cout<<"Area of square = "<<a.area(12.5f)<<endl;
    cout<<"Area of rectangle = "<<a.area(5,8)<<endl;
    cout<<"Area of triangle = "<<a.area(2.5f,10.6f)<<endl;
    return 0;
}
