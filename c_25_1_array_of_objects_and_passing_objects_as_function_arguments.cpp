#include <iostream>
using namespace std;

class employee
{
    int salary,id;
    
    public:
    void setId(void){

        salary = 120;
        cout<<"Enter the employee id ";
        cin>>id;
    }

    void getId(void){
        cout<<"The employee id is : "<<id<<endl;
    }
};

int main()
{
    employee fb[4];
   for (int i = 0; i < 4; i++)
   {
        fb[i].setId();
        fb[i].getId();
   }

    return 0;
}