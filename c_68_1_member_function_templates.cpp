#include <iostream>
using namespace std;

template <class T>
class harry{
    public:
       T data;

    harry(T a){
        data = a;
    }
    void display();

};

template <class T>
void harry<T> :: display(){
    cout << "The value of data is "<< data <<endl;
}

int main()
{
    // harry <int> h(23);
    // harry <float> h(2.3);
    harry <char> h('c');
    cout << h.data <<endl;
    h.display();

    return 0;
}