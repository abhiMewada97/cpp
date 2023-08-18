#include <iostream>
using namespace std;
int main()
{
    float e = 43.2f; // this float value  // use small or cpital (f, F  &  l, L)
   
    // float e = 43.2; // this is double value
   
    long double d = 43.2l; // this is double value
    // long double d = 43.2; // this is also double value

    //********** float, double and long double literal **********

    cout<<"The value of 43.2f is "<<sizeof(43.2f)<<endl;
    cout<<"The value of 43.2F is "<<sizeof(43.2F)<<endl;
    cout<<"The value of 43.2l is "<<sizeof(43.2l)<<endl;
    cout<<"The value of 43.2L is "<<sizeof(43.2L)<<endl;
    cout<<"The value of 43.2 is "<<sizeof(43.2)<<endl;  // This will give value of double

    return 0;
}