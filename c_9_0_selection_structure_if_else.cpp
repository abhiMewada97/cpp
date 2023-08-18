#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age : ";
    cin>>age;

    if(age<18)
    cout<<"You can not come to the party "<<endl;
    else if(age==18)
    cout<<"You can get party pass";
    else
    cout<<"you can come in the party";
    return 0;
}