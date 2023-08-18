#include <iostream>
using namespace std;

//Forward declaration
class complex;

class calculator
{
    public:
    int sum(int a, int b)
    {
        return a+b;
    }

    int sumRealComplex(complex, complex);  //This is declaration
};

class complex
{
    int a,b;
    // Individually declaring functions as friends
    friend int calculator :: sumRealComplex(complex, complex);

    //Alternator-- Declaring the entire calculatore class as friend
    // friend class calculator;

    public:
    void setData(int n1, int n2)
    {
        a=n1;
        b=n2;
    }

    void getData()
    {
        cout << "Your no is " << a <<" " << b <<"i" <<endl;
    }
};

int calculator :: sumRealComplex(complex o1, complex o2)
{
     return (o1.a+o2.a);   //1+5
    // return (o1.a+o2.b);   //1+7
    // return (o1.b+o2.a);   //4+5
    // return (o1.b+o2.b);   //4+7
    // return (o1.a+o1.b);   //1+4
}

int main()
{
    complex o1, o2;
    o1.setData(1,4);
    o1.getData();
    o2.setData(5,7);

    calculator cal;
    int res = cal.sumRealComplex(o1,o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    return 0;
}