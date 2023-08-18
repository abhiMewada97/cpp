#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    for ( i = 0; i < 7; i++)
    {
        if (i==3)
        {
            break;  //it will print 0 1 2 
            // continue;  //it will not print 3
        }
        cout<<i<<endl;
    }
    return 0;
    
}