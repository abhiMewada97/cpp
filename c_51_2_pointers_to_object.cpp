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
    complex *ptr = &c;  //hamare pass ek pointer hai, pointer ki help se object ke public member ko aeshe exist kar sakte hai
    // c.setData(2,34);
    // c.getData();
    //*ptr.setData(2,34);    //This will give error
    (*ptr).setData(2,34);   // Bracket is must because, ( . )dot operator has high precident then ( * ) operator
    (*ptr).getData();

    return 0;
}