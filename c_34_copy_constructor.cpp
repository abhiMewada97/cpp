#include <iostream>
using namespace std;

class number{
    int a;

    public:
        number(){
            a = 0;
        }

        number(int num){
            a = num;
        }

        // When no copy constructor is not found, compiler supplies it's own copy constructor
        number(number &obj){
            cout << "Copy constructer called " <<endl;
            a = obj.a;
        }

    void display(){
        cout << "The number for this object is "<<a << endl;
    }
};

int main()
{
    number x(1), y, z(28), z2;
    x.display();
    y.display();
    z.display();

    number z1(x);     // copy constructor invoked
    z1.display();

                    //  object bana banaya rakha hai or aap sirf assignment ker rahe hai to apka copy constructor called nahi hoga  // Ex. z2
    z2 = z1;            // copy constructor not called
    z2.display();

    number z3 = z1;     // copy constructor invoked
    z3.display();

    return 0;
}