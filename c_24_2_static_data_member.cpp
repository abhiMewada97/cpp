#include <iostream>
using namespace std;

class Employee {

    int id;
    int count = 0; 

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
            // har object ka apna count hai
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