#include <iostream>
using namespace std;
class y;

class x{
    int data;
    
    public:
    void setValue(int value){
        data = value;
    }
    friend void sum (x, y);
};

class y{
    int num;

    public:
    void setValue(int value){
        num = value;
    }
    friend void sum(x, y);
};

void sum(x o1, y o2)
{
    cout << "Summing data of x and y objects is " << o1.data + o2.num << endl;
}

int main()
{
    x a1;
    a1.setValue(5);

    y b2;
    b2.setValue(3);

    sum(a1,b2);

    return 0;
}