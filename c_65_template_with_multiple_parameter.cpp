#include  <iostream>
using namespace std;
/*
CLASS TEMPLATE WITH MULTIPLE PARAMETERS  (ONE, TWO OR MORE THAN TWO)
template <class T1, class T2, class T3........(COMA SEPARATED)>
class nameOfClass{
    // body
}
*/

template <class T1, class T2>
class myClass{
    public:
        T1 data1;
        T2 data2;

        myClass(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }

        void display(){
            cout << this->data1 <<endl << this->data2 <<endl;
            // cout << data1 <<endl << data2 <<endl;   // both are correct
        }
};

int main()
{
    myClass <char, int> obj('c',4);
    obj.display();

    return 0;
}