#include <iostream>
using namespace std;

class A{
    int a;
    public:

    // void setData(int a){
    //         this->a = a;
    //     }

        A & setData(int a){   //This is returning value
            this->a = a;
            return *this;
        }
        
        
        void getData(){
            cout <<"a = " << a <<endl;
        }
};

int main()
{
    A a;
    // a.setData(4);  // this is also correct but not print value
    a.setData(4).getData();  // this is returning a object
    a.getData();

    return 0;
}