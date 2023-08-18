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
    // complex c;
    // complex *ptr = &c;

    complex *ptr = new complex;  //new laga kar ek new object ban jata hai
    ptr->setData(2,34);  //arrow means ye esh pointer ko dereference karega
                         // new complex ko point kar raha hai
    (*ptr).getData();

    // Array of objects
    complex *ptr1 = new complex[4];  // 4 new objects ban rahe hai
    ptr1->setData(6,4);
    ptr1->getData();

    return 0;
}