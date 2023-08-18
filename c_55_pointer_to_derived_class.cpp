#include <iostream>
using namespace std;

class BaseClass{
public:
    int base_obj;
    void Display()
    {
        cout << "Display base class variable base_obj " << base_obj << endl;
    }
};

class DerivedClass : public BaseClass{ // base class se derived class bani
public:
    int derived_obj;
    void Display()
    {
        cout << "Display base class variable base_obj " << base_obj << endl;
        cout << "Display derived class bariable derived_obj " << derived_obj << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;     // ek pointer banaya jo base class ke objects ko point karega
    BaseClass obj_base;                // base class ka object
    DerivedClass obj_derived;          // derived class ka object
    base_class_pointer = &obj_derived ;// base class ka pointer derived class ke object point kar raha hai
                                       // base class ka pointer derived class ke object ko point kar sakta hai it legal
    base_class_pointer->base_obj = 34;
    base_class_pointer->Display();   // ye base class ke display ko point karega
    // base_class_pointer->derives_obj = 34;  //it will throw an error because base class ke pointer se derived class ki property exit karne ki kosis ki hai
    
    base_class_pointer->base_obj = 274;
    base_class_pointer->Display();

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->derived_obj = 65;
    derived_class_pointer->Display();

    return 0;
}

// agar aap 'pointer' ki help se 'display function' ko call karoge to bo "bass class" ka 'display' call hoga 'derived class' ka nahi because 'poniter' 'bass class' ka hai 'deribed class' ka nahi, ese kahte hai "let winding"