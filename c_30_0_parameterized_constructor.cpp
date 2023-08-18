#include <iostream>
using namespace std;

class complex{
    int a,b;

    public:
    complex(int, int);

    void printValue(void)
    {
        cout << "The value is "<<a <<" + "<<b <<"i" <<endl;
    }
};

complex :: complex(int x, int y)   // This is a default constructor as it takes 2 parameters
{
    a = x;
    b = y;
}

int main()
{
    // Implicit Call
    complex a(34,54);
    
    // Explicit call
    complex b = complex(33,44);

    a.printValue();
    b.printValue();

    return 0;
}