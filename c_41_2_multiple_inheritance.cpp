#include <iostream>
using namespace std;
/*
class DerivedC : visibility-mode base1, visibility-mode base2{
    class body of class "DerivedC"
};
*/

class base1{
    protected:
        int base1int;
    public:
        void set_base1int(int a){
            base1int = a;
        }
};

class base2{
    protected:
        int base2int;
    public:
        void set_base2int(int a){
            base2int = a;
        }
};

class base3{
    protected:
        int base3int;
    public:
        void set_base3int(int a){
            base3int = a;
        }
};

class Derived: public base1,public base2, public base3{
    public:
        void show(){
            cout << "The value of base1int is : "<< base1int << endl;
            cout << "The value of base2int is : "<< base2int << endl;
            cout << "The value of base2int is : "<< base3int << endl;
            cout << "The sum of two value is : "<< base1int + base2int + base3int << endl;
        }

};

int main(){
    Derived abhi;
    abhi.set_base1int(35);
    abhi.set_base2int(5);
    abhi.set_base3int(7);
    abhi.show();

    return 0;
}