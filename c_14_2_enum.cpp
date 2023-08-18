#include <iostream>
using namespace std;

int main()
{
    enum meal{ breakfast, lunch, dinner };
    meal m1 = lunch; 
    meal m2 = dinner;
    
    cout<<(m2==1)<<endl;
    cout<<breakfast<<endl;
    cout<<m1<<endl;
    cout<<m2<<endl;

    return 0;
}