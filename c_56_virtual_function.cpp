#include <iostream>
using namespace std;

class baseClass{
    public:
        int var1 = 1;
        virtual void display(){
            cout << "1 Display the variable var1 "<< var1 << endl;
        }
};

class derivedClass : public baseClass{
    public:
        int var2 = 2;
        virtual void display(){
            cout << "2 Display the variable var1 "<< var1 << endl;
            cout << "2 Display the variable var2 "<< var2 << endl;
        }
};

int main()
{
    baseClass *base_class_pointer;
    baseClass obj_base;
    derivedClass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->display();

    return 0;
}

// virtual function bata raha hai ki agar base class ka pointer derived class ke display ko call kare to derived class ke display ko hi call karna 

// difolte bahavior ko overwrite karne ek liye 

// parmorphisam ek property hoty hai jisse object jo alag alag class ko belong kar raha hai bo ek tarah ke massage ko respond karte hai  [ yaha per display ek massage hai ]