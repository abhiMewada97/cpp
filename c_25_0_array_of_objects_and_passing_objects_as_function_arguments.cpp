#include <iostream>
using namespace std;

class employee
{
    int salary,id;
    
    public:
    void setId(void){

        salary = 120;
        cout<<"Enter the employee id "<< endl;
        cin>>id;
    }

    void getId(void){
        cout<<"The employee id is : "<<id;
    }
};

int main()
{
    employee harry, abhi;

    harry.setId();
    harry.getId();

    return 0;
}