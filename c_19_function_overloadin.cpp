#include <iostream>
using namespace std;

//------>>>>  volume of squar
int volume(int a, int b)
{
    return a*a;
}

//-------->>>>>   volume of cube
int volume(int a)
{
    return a*a*a;
}

// ------->>>>>>>   volume of rectangular
int volume(int l, int b, int h)
{
    return l*b*h;
}

int main()
{
    cout<<"The volume of square is  "<<volume(3,5)<<endl;
    cout<<"The volume of cube is  "<<volume(2,2,5)<<endl;
    cout<<"The volume of rectangular is  "<<volume(3,4,5)<<endl;
    return 0;
}