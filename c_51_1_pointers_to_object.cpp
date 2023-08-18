#include <iostream>
using namespace std;

class complex{
    int real, imaginary;
    public:
       void getData(){
           cout << "The real value is "<<real <<endl;
           cout << "The imaginary value is "<<imaginary <<endl;
       }

       void setData(int a, int b){
           real = a;
           imaginary = b;
       }
};

int main()
{
    complex c;
    c.setData(2,34);
    c.getData();

    return 0;
}