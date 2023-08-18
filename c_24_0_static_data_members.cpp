#include <iostream>
using namespace std;

class Employee {

    int id;

    public:

        void setData (void)
        {
            cout << "Enter the empoyee id "<< endl;
            cin >> id ;
        }
        void getData (void)
        {
            cout << "The employee id is " << id << endl;
        }
};

int main()
{
    Employee Rohan, Sohan, Abhi;


    // Rohan.id = 12;  //cannot do this as  id  is private

    Rohan.setData();
    Rohan.getData();

    Sohan.setData();
    Sohan.getData();

    Abhi.setData();
    Abhi.getData();

    return 0;
}