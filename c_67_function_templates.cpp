#include <iostream>
using namespace std;

template <class T>
void average(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x=23, y=2;
    cout << "Before the swap "<<x <<endl <<y <<endl;
    average (x, y);
    cout << "After the swap "<<x <<endl <<y <<endl;
    return 0;
}