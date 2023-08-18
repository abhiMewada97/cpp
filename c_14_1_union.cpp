#include <iostream>
using namespace std;

union food
{
    int prize;  // 4              // we can use one in one time
    float kg;   // 4             // it will use 4 byte
    char name;  //1             // the maximum size is 4
};

int main()
{
    union food rise;
    rise.prize = 10;              // run time memory use
    // rise.kg = 10.4;
    // rise.name = r;

    cout<<"The prize is "<<rise.prize<<endl;
    // cout<<"The amount in kg is "<<rise.kg<<endl;
    // cout<<"The name is "<<rise.name<<endl;
    return 0;
}