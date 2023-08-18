#include <iostream>
using namespace std;
// void swapvalue(int a, int b)       // this will not swape the value
// {
//     int n = a;
//     a=b;
//     b=n;
// }

//-----------------> call by reference using pointer
// void swappointer(int *a, int *b)       //  this will swape the value
// {
//     int n = *a;
//     *a=*b;
//     *b=n;
// }

//----------->call by reference
void swapreference(int &a, int &b)       //  this will swape the value
{
    int n = a;
    a=b;
    b=n;
}

int main()
{
    int x=13,y=2;
    cout<<endl<<"The value of x is "<<x<<endl<<"The value of y is "<<y<<endl<<endl;
    // swapvalue(x,y);       // this will not swape the value
    // swappointer(&x,&y);    // this will swape the value //using pointer reference
    swapreference(x,y);       // using reference variable
    cout<<"The value of x is "<<x<<endl<<"The value of y is "<<y<<endl;
    return 0;
}