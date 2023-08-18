#include <iostream>
using namespace std;
int product(int x,int y)
{
    static int c =0;   // This execute only once time  
                      //static function ke sath inline function use nahi karna chahiye
    c = c + 1;        // Next time this function is run, The value of c is retained 
    return x*y+c;
}
int main()
{
    int a,b;
    cout<<"Enter 2 no. "<<endl;
    cin>>a>>b;
    cout<<"The product is "<<product(a,b)<<endl;
    cout<<"The product is "<<product(a,b)<<endl;
    cout<<"The product is "<<product(a,b)<<endl;
    cout<<"The product is "<<product(a,b)<<endl;
    cout<<"The product is "<<product(a,b)<<endl;
    cout<<"The product is "<<product(a,b)<<endl;

    return 0;
}