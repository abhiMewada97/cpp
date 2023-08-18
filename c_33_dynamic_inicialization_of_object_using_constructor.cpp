#include <iostream>
using namespace std;

class bankDeposite
{
    int principle;
    int year;
    float interestRate;
    float returnValue;

public:
    // bankDeposite() {}  // This will give error
    bankDeposite() {}  //this is a default constructer  // Now This will not give error
    bankDeposite(int p, int y, float r);
    bankDeposite(int p, int y, int r);
    void show();
};

bankDeposite ::bankDeposite(int p, int y, float r)
{
    principle = p;
    year = y;
    interestRate = r;
    returnValue = principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + r);
    }
}

bankDeposite :: bankDeposite(int p, int y, int r)
{
    principle = p;
    year = y;
    interestRate = (float)r/100;
    returnValue = principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
    
}

void bankDeposite :: show()
{
    cout << "Principle amount was "<< principle 
    << " and Return value after "<<year
    <<" year is "<< returnValue <<endl;
}

int main()
{
    int p,y;
    float r;
    int R;

    // bd3.show(); This will give garbage value

    cout << "Enter the value of p, y and r "<<endl;
    cin >> p >> y >> r;

    bankDeposite bd1, bd2, bd3;  //below is writen when this not writen
    bd1 = bankDeposite(p, y, r);
    
    // bankDeposite bd1 = bankDeposite(p, y, r);  //This will writen when above is not writen 
    bd1.show();

    cout << "Enter the value of p, y and r "<<endl;
    cin >> p >> y >> R;
    bd2 = bankDeposite(p, y, R);
    bd2.show();

    return 0;
}