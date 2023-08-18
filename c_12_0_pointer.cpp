#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    int *p = &a;
   
    cout<<"Value of a is "<<a<<endl<<endl;
   
    // & (Addresh of) operator
    cout<<"Addresh of a is "<<p<<endl;
    cout<<"Addresh of a is "<<&a<<endl<<endl;

    // * (value at) Dereference operator
    cout<<"Value at p addresh is "<<*p<<endl<<endl;

    // pointer to pointer 
    int **c = &p;
    cout<<"The addresh of p is "<<&p<<endl;
    cout<<"The addresh of p is "<<c<<endl;
    cout<<"The value at addresh c is "<<*c<<endl;
    cout<<"The value at addresh value_at(value_at(c)) is a is "<<**c<<endl;

    return 0;
}