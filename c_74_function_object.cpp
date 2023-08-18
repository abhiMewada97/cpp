#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    //Function Object (functor) : Function wrraped in a class so that it available like an object
    int arr[] = {12,2,55,23,44,3};
    
    // sort(arr, arr+5);     // By default in accending order

    sort(arr, arr+5, greater<int>());  // In decending order
                                       // Function object pass kiya
                                // greater<int>() is a 'function object' not a 'function'

    for(int i=0; i<6; i++){
        cout <<arr[i] <<endl;
    }

    return 0;
}