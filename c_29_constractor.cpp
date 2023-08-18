#include <iostream>
using namespace std;

class complex{
    int a,b;

    public:
    complex(void);    // Constructor declaration

    void printValue()
    {
        cout << "Your value is "<< a << " + "<< b << "i" <<endl;
    }
};

complex :: complex(void)  // This is a default constructor as it takes no parameters
{
    a = 0;
    b = 0;
    // cout << " Hello ";
}

int main()
{
    complex c1, c2, c3;
    c1.printValue();
    c2.printValue();
    c3.printValue();
}