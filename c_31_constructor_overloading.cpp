#include <iostream>
using namespace std;

class complex{
    int a, b;

public:
    complex(){      // Default constructer
        a=0;
        b=0;
    }

    complex(int x){    // Parameterized constructer
        a=x;
        b=0;
    }

    complex(int x, int y){    // Parameterized constructer
        a=x;       // In which we pass parameter is called Parameterized constructor
        b=y;
    }

    void printNumber(){
        cout <<"The complex no. is " << a <<" + "<<b <<"i" << endl;
    }
};

int main()
{
    complex c1;
    c1.printNumber();

    complex c2(5);
    c2.printNumber();

    complex c3(3,8);
    c3.printNumber();

    return 0;
}