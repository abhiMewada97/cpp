#include <iostream>
using namespace std;
int & swap(int &a, int &b)
{
    int n = a;
    a=b;
    b=n;
    return a;
}
int main()
{
    int x=2, y=43;
    cout<<"The value of x and y is "<<x<<" "<<y<<endl;
    swap(x,y) = 765;
    cout<<"The value of x and y is "<<x<<" "<<y<<endl;
    return 0;
}