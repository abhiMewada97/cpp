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
};

// int Employee :: count;  //ek esha variable bana hai jo class se juda hai eshliye
                        // static variable ko class variable bhi kahate hai 
                        // OOPs ke andar abh ye objest ki property nahi hai ye class ki propery hai

int Employee :: count = 1000;  // agar aap 1000 se start karna chahte hai to

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