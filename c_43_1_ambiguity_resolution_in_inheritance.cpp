#include <iostream>
using namespace std;

class base1{
    public:
       void greet(){
           cout <<"How are you ?" <<endl;
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

};

int main()
{
    base1 base1obj;
    base1obj.greet();

    base2 base2obj;
    base2obj.greet();

    // derived d;   // This will give error becouse compiler unable to understained that, whose greet i will run base1 or base2
    // d.greet();

    return 0;
}