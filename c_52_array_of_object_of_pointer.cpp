#include <iostream>
using namespace std;

class shopItem{
    int id;
    float price;
    public:

       void setData(int a, float b){
           id = a;
           price = b;
       }

       void getData(){
           cout << "The id is : "<<id <<endl;
           cout << "The price is : "<<price <<endl;
       }
};

int main()
{
    int size = 3;
/* **********  Example for understand**************
    int *ptr = &size;
    int *ptr = new int[34];  // 34 block reserve kar int size ka
*/
    shopItem *ptr = new shopItem[size];
    shopItem *ptrTemp = ptr;

    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout <<"Enter the id and price of item no. : "<<i+1 << endl;
        cin >> p >> q ;

        ptr->setData(p, q);
        ptr++;
    }
    for ( i = 0; i < size; i++)
    {
        cout << "The item no is : "<<i+1 <<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    

    return 0;
}