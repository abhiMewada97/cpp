#include <iostream>
using namespace std;

class base{
    protected:
        int a;

    private:
         int b;
};

class drived : protected base{

};

int main()
{
    base b;
    drived d;
    // cout << d.a;  // Will not work since it is protected in both base as well as drived class
    return 0;
}