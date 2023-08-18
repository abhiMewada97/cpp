#include <iostream>
using namespace std;

template <class T>
class harry{
    T data;

    harry(T a){
        data = a;
    }

    // void display();
};

// template <class T>
// void harry<T> :: display(){
//     cout << data <<endl;
// }
void func(int a){
    cout << "I am first func() "<<a << endl;
}

template <class T>
void func(T a){
    cout << "This is templatised func() "<<a <<endl;
}

int main()
{
    func(4);   //Exact match take highest priority
    func(4.9);   //Exact match take highest priority
    return 0;
}