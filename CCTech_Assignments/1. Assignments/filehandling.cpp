#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main(int argc, char* argv[])
{
    ifstream in;
    //in.open("input_file.txt");
    in.open(argv[1]);

    while(in.eof())
    {
        float x, y;
        in>>x>>y;
        cout<<x<<" "<<y;
    }
    in.close();
}