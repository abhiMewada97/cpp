#include <iostream>
using namespace std;
int main()
{
    int a = 2;

    // Bassic Example
    int *ptr = &a;

    // new operator
    // int *p = new int(40);
    float *p = new float(45.32);
    cout << "The value at the address is : "<<*ptr <<endl;
    cout << "The value at the address is : "<<*p <<endl <<endl;

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    //delete arr;  // arr delete ho jayga, dynamic allocated array ko free ker dega
    delete[] arr;  // pura arr countigues memory ko free kar dega
    cout <<"The value of arr[0] is : "<<arr[0] <<endl;
    cout <<"The value of arr[1] is : "<<arr[1] <<endl;
    cout <<"The value of arr[2] is : "<<arr[2] <<endl;

    return 0;

}