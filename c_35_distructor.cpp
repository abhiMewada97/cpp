#include <iostream>
using namespace std;
// Destructor never take an argument nor does it return any value

int count = 0;

class num{

    public:
    num(){
        count++;
        cout << "++This is the time when constructor is called for object number "<< count << endl;
    }

    ~num(){
        cout << "--This is the time when destructor is called for object number "<< count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside the main function "<<endl;
    cout << "Creating first object n1 "<<endl;
    num n1;
    {
        cout << "Intering this blocks "<<endl;
        cout << "Creating two more object "<<endl;
        num n2, n3;
        cout << "Exiting from this block"<<endl;
    }
    cout << "Back to main function "<<endl;
    return 0;
}

// Constructor and Distructor class ka name use karte hai
// (~) tild is use for destructor 