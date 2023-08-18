#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age : ";
    cin >> age;

    switch (age)
    {
    case 18:
        cout << "You are 18 " << endl;
        break;

    case 19:
        cout << "You are 19 " << endl;
        break;

    case 17:
        cout << "You are 17 " << endl;
        break;

    default:
        cout << "You not enter 18 17 19" << endl;
    }

    return 0;
}