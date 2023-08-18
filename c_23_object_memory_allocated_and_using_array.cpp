#include <iostream>
using namespace std;

class Shop
{
    void itemId[100];
    void itemPrize[100];
    void counter;

public:
    void initCounter(void) = {counter == 0};
    void setPrize(void);
    void displayPrize(void);
};

void Shop :: setPrize(void)
{
    cout << "Enter id your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter the price of your item " << endl;
    cin >> itemPrize[counter];
    counter++;
}

void Shop :: displayPrize(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of the item with Id " << itemId[i] << " is " << itemPrize[i] << endl;
    }
}

int main()
{
    Shop dukan;
    dukan.initcounter();
    dukan.setPrize();
    dukan.setPrize();
    dukan.setPrize();
    dukan.displayPrize();

    return 0;
}
