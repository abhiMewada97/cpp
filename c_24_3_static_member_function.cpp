#include <iostream>
using namespace std;

class Employee {

    int id;
    static int count; // every object has not its own count

    public:

        void setData (void)
        {
            cout << "Enter the empoyee id "<< endl;
            cin >> id ;
            count++;
        }
        void getData (void)
        {
            cout << "The employee id is " << id << " and this is employee no " << count << endl;
        }

        static void getCount(void)
        {
            cout << "The count no is " << count << endl;
        }
};

int Employee :: count; 

int main()
{
    Employee Rohan, Sohan, Abhi;


    // Rohan.id = 12;  //cannot do this as  id  is private

    Rohan.setData();
    Rohan.getData();
    Employee :: getCount();

    Sohan.setData();
    Sohan.getData();
    Employee :: getCount();

    Abhi.setData();
    Abhi.getData();
    Employee :: getCount();

    return 0;
}