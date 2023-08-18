#include <iostream>
using namespace std;

class simple{
    int data1, data2, data3;

    public:
    simple(int a, int b=4, int c=9)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void printNumber();
};

void simple :: printNumber()
    {
        cout << "Data1 : "<<data1 << ", Data2 : "<<data2<< " and Data3 : "<<data3 <<endl;
    }

int main()
{
    simple c1(3,1,7);
    c1.printNumber();

    // simple c2(3,1);
    // c2.printNumber();

    // simple c3(3);
    // c3.printNumber();

    return 0;
}