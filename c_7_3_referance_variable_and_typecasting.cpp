#include <iostream>
using namespace std;
int main()
{
    int a = 32;
    float b = 32.45;
    //********* type casting ********
    cout<<"The value of a is "<<float(a)<<endl;
    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<b<<endl;
    int c = int (b);
    cout<<"The sum is "<<a + b <<endl;
    cout<<"The sum is "<<a + int(b);

    return 0;
}