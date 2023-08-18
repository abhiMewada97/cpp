#include <iostream>
using namespace std;

class student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number(void);
};

void student :: set_roll_number(int r){
    roll_number = r;
}

void student :: get_roll_number(void){
    cout << "The roll no is : "<< roll_number;
}

class exam : public student{
    protected:
        float maths;
        float physics;

    public:
        void set_marks(float, float);
        void get_marks(void);
};

void exam :: set_marks(float m1, float m2){
    maths = m1;
    physics = m2;
}

void exam :: get_marks(void){
    cout << "The maths marks is : "<<maths <<endl;
    cout << "The physics marks is : "<<physics <<endl;
}

class result : public exam{
    float percentage;
    public:
        void displayResult(void){
            get_roll_number();
            get_marks();
            cout <<"The percentage is : "<<(maths + physics)/2 << endl;
        }
};

int mian()
{
    result abhi;
    abhi.set_roll_number(2343);
    abhi.set_marks(90.0,89.0);
    abhi.displayResult();

    return 0;
}