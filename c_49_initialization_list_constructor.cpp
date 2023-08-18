#include <iostream>
using namespace std;

/*
Syntax for Inicialization list in constructor
constructor (argument-list) : initializtion-section
{
    assignment list + other code;
}

:::::::::::::::::::::::::::::::::example::::::::::::::::::::::::::::::::::
class test{
    int a;
    int b;
    int c;

    public:
        text(int i, int j): a(i), b(j) { constructor-body }
};

*/

class test{
    int a;  // a is declare first so a is initilized first
    int b;

    public:
        //test(int i, int j): a(i), b(j)
        //test(int i, int j): a(i), b(i+j)
        //test(int i, int j): a(i), b(2*j)
        //test(int i, int j): a(i), b(a+j)   // b ko initialize karne ke liye a variable ka use kar rahe hai
        //test(int i, int j): b(j), a(i+b)   //a give garbage value because a initialized first
                                             // this is correct if b declare first then a
        test(int i, int j): a(i)    // we can also initilize b inside the body
        {
            b = j;
            cout <<"The constructor is called : "<<endl;
            cout <<"The value of a is : "<<a <<endl;
            cout <<"The value of b is : "<<b <<endl;
        }
};

int main(){
    test t(4,5);

    return 0;
}