#include <iostream>
using namespace std;

class base1{
    public:
       void greet(){
           cout <<"\nHow are you ?" <<endl;
       }
};

class base2{
    public:
        void greet(){
            cout << "Kaise ho ?" << endl;
        }
};

class derived: public base1, public base2{
    int a;

    public:
    void greet(){
    base2 :: greet();   // now it will run be becouse compiler understand that greet of base2 Run
    }
};

int main()
{
    base1 base1obj;
    base1obj.greet();

    base2 base2obj;
    base2obj.greet();

    derived d;
    d.greet();   // now it will run

    return 0;
}