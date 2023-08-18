#include <iostream>
using namespace std;
int main()
{
    int a = 2;
    int *ptr = &a;    // Bassic Example
    *ptr = 999;

    // new operator
    // int *p = new int(40);
    float *p = new float(45.32);
    cout << "The value at the address is : "<<*ptr <<endl;
    cout << "The value at the address is : "<<*p <<endl <<endl;

    //int *arr = new int[3];  // dynamic tarike se apne memory ko allocate kiya hai
    //int *arr = new int[3];  // agar run time per memory available nahi hai to error show karega
    
    int *arr = new int[3];
    arr[0] = 10;
    *(arr+1) = 20;      // this is also correct way
    arr[2] = 30;
    cout <<"The value of arr[0] is : "<<arr[0] <<endl;
    cout <<"The value of arr[1] is : "<<arr[1] <<endl;
    cout <<"The value of arr[2] is : "<<arr[2] <<endl;

    return 0;

}