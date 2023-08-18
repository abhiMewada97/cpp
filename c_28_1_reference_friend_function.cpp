#include <iostream>
using namespace std;
class c2;

class c1{
    int val1;
    friend void changeValue(c1 &, c2 &);

    public:
    void setValue(int num){
        val1 = num;
    }

    void display(void){
        cout << val1 <<endl;
    }
};

class c2{
    int val2;
    friend void changeValue(c1 &, c2 &);

    public:
    void setValue(int num){
        val2 = num;
    }

    void display(void){
        cout << val2 <<endl;
    }
};

void changeValue(c1 &x, c2 &y)
{
    int temp;
    temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.setValue(3);
    oc2.setValue(8);
     cout << "The value of c1 before: ";
    oc1.display();
    cout << "The value of c2 before: ";
    oc2.display();

    changeValue(oc1,oc2);

    cout << "The value of c1 after: ";
    oc1.display();
    cout << "The value of c2 after: ";
    oc2.display();

    return 0;
}