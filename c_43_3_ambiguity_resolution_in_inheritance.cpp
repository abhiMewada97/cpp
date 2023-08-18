#include <iostream>
using namespace std;

class base1{
    public:
       void say(){
           cout <<"\nHow are you ?" <<endl;
       }
};

class base2: public base1{
    public:
        void say(){
            cout << "Kaise ho ?" << endl;
        }
};

int main()
{
    base1 base1obj;
    base1obj.say();

    base2 base2obj;
    base2obj.say(); // If we do not define function say() in base2 class then, it will use function of base1 class

    return 0;
}