#include <iostream>
using namespace std;

class Employee
{
    private:  //*********************      Private Class        *****************************************
    int a, b, c;

    public:  //***********************      Public Class          *****************************************
    int d, e;
    
    void setData(int a, int b, int c);  //declaration
    void getData()
    {
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }

};

void Employee :: setData(int a1,int b1,int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee abhi;
    // abhi.a = 23;   // a is private .. give error
    abhi.d = 456;
    abhi.e = 524;

    abhi.setData(2,3,4);
    abhi.getData();

    return 0;
}