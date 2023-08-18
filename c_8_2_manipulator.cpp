#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int  a=4, b=43, c=432;
    cout<<"The vlaue of a without setw is : "<<a<<endl;
    cout<<"The vlaue of b without setw is : "<<b<<endl;
    cout<<"The vlaue of c without setw is : "<<c<<endl;

    cout<<"The vlaue of a is : "<<setw(4)<<a<<endl;
    cout<<"The vlaue of b is : "<<setw(4)<<b<<endl;
    cout<<"The vlaue of c is : "<<setw(4)<<c<<endl;
    return 0;
}