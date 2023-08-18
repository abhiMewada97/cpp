#include <iostream>
using namespace std;

class Employee{
    int id;

    public:
    float salary;
       Employee(int inpID)
       {
           id = inpID;
           salary = 43.02;
       }

       Employee(){}
};


// Dryvide class syntax
/*
class {{drived class}} {{name visibility mode}} {{base class name}}
{
    class members/methods etc....
}

Note ;
1. default visibility mode is private
2. Public visibility Mode : Public member of the base class becomes Public members of the derived class
3. Private visibility Mode : Public member of the base class becomes Private members of the derived class 
4. Private member are never inherited
*/

// Creating a program class drived from employee base class
class Programmer : Employee{
    public :
    int id;
    Programmer(int inpID)
    {
        id = inpID;
    }
    int languageCode = 9;
};

int main()
{
    Employee rohan(1), sohan(2);
    cout << rohan.salary << endl;
    cout << sohan.salary << endl;

    Programmer skillF(1);
    return 0;
}