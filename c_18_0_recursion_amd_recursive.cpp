#include <iostream>
using namespace std;

int fact(int n)
{
    if(1>=n)
    {
        return 1;
    }
    return n*fact(n-1);
}

int main()
{
    int a;
    cout<<"Enter a num "<<endl;
    cin>>a;
    cout<<"the factorial of "<<a<<" is "<<fact(a)<<endl;
    return 0;
}