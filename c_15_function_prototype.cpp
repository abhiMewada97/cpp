#include <iostream>
using namespace std;
// void g(void);     // also correct
void g();       // This is function prototype
int sum( int a, int b)      // sayad this is not protorype
{
    int c;
    c = a+b;
    return c;
}

int main()
{
    int num1, num2;
    cout<<"Enter two no to get sum "<<endl;
    cin>>num1>>num2;
    cout<<"The sum is "<<sum(num1, num2)<<endl;
    g();
    return 0;
}

void g()
{
    cout<<"\nHello, Good Morning";
}