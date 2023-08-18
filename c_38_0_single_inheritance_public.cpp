#include <iostream>
using namespace std;

class Base{ // Private by default and is not inheritable
    int data1 ;

    public:
    int data2 ;

    void setData();
    int getData2();
    int getData1();
};

void Base :: setData(void){
    data1 =10;
    data2 = 20;
}

int Base :: getData1(){
    return data1;
}

int Base :: getData2(){
    return data2;
}

class Derived : public Base{// class is being drived publically
    int data3;

    public:
    void process();
    void display();
};

void Derived :: process(){
    data3 = data2 * getData1(); //data1 base class ka perivate member hai or private member ko base class ke kisi member function ki help se hi exit kiya ja sakta hai
}

void Derived :: display(){
    cout << "Value of data1 is "<< getData1() <<endl;
    cout << "Value of data2 is "<< data2 << endl;
    cout << "Value of data3 is "<< data3 << endl;
}

int main()
{
    Derived der;
    der.setData();
    der.process();
    der.display();
    return 0;
}