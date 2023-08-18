#include <iostream>
using namespace std;
int c = 45;

int main()
{
    int num1,num2,c;

    cout<<"Enter the two no. : ";
    cin>>num1>>num2;
    c = num1 + num2;
    cout<<"This is sum of two no. c = "<<c<<endl;
    cout<<"This is gloaval variable c = "<<::c<<endl;   // :: this is scope resolation
    
    return 0;
}