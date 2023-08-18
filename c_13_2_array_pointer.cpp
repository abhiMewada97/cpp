#include <iostream>
using namespace std;
int main()
{
    int marks[4] = {23, 43, 12, 53};

    int *p = marks;

    cout<<"Using pointer "<<endl;
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

    cout<<*p<<endl;
    cout<<*(p++)<<endl;
    cout<<*p<<endl;
    cout<<*(++p)<<endl;
    cout<<*p<<endl;
        

    return 0;
}
