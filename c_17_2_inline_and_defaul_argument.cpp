#include <iostream>
using namespace std;

float moneyRecieve(int currentMoney, float interest = 1.04)
// flaot moneyRecieve( float interest = 1.04, int currentMoney)  //This will give error
{
    return currentMoney * interest;
}

int main()
{
    int money = 100000;
    cout<<endl<<"If you have "<<money<<" Rs in your bank account , So you will get "<<moneyRecieve(money)<<" after the one year\n"<<endl;
    cout<<"For VIP If you have "<<money<<" Rs in your bank account , So you will get "<<moneyRecieve(money,1.09)<<" after the one year"<<endl<<endl;
    return 0;
}