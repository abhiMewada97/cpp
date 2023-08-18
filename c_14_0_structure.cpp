#include <iostream>
using namespace std;
 
typedef struct student         //tyoedef is used to give one another name 
{
    int id;            // 4
    float fees;        // 4    //it will use 9 byte
    char subject;      // 1 
}st;

// struct student
// {
//     int id;
//     float fees;
//     char subject;
// };

int main()
{
    st shubham;
    // struct student shubham;
    struct student abhishek, roshan;
    shubham.id = 123312231;
    shubham.fees = 80000.300;
    shubham.subject = 'c';

    cout<<"The id of shubham is "<<shubham.id<<endl;
    cout<<"The fees of shubham is "<<shubham.fees<<endl;
    cout<<"The subject of shubham is "<<shubham.subject<<endl;
    
    return 0;
}