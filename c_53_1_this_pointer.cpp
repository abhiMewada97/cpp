#include <iostream>
using namespace std;

class A{
    int a;
    public:
        // void setData(int a){  //this will give garbage value
        //     a = a;
        // }
        
        // void setData(int a1){  //this is correct
        //     a = a1;
        // }

        void setData(int a){     //this is also correct
            this->a = a;
        }
        
        
        void getData(){
            cout << a <<endl;
        }
};

int main()
{
    A a;
    a.setData(4);
    a.getData();

    return 0;
}