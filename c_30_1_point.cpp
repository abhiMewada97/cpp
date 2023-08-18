#include <iostream>
using namespace std;

class point{
    int x,y;

    public:

    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void printValue(void)
    {
        cout << "The point is (" <<x <<", "<<y<<")"<<endl;
    }
};

int main()
{
    point p(34, 22);
    p.printValue();

    point q(44,55);
    q.printValue();
    return 0;
}