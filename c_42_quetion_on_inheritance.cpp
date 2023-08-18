// Solution in video no 47
#include <iostream>
#include <cmath>
using namespace std;

class simple_calculator{
    protected:
         int a,b;
    public:
          void set_data_simple(){
            cout <<"Enter the value of a : ";
            cin >> a;
            cout <<"Enter the value of b : ";
            cin >> b;
          }

          void get_value_simple(){
              cout << "The value of a+b is : "<<a+b << endl;
              cout << "The value of a-b is : "<<a-b << endl;
              cout << "The value of a*b is : "<<a*b << endl;
              cout << "The value of a/b is : "<<a/b << endl;
          }
};

class scientifi_calculator{
    protected:
          int a;
    public:
          void set_data_scintific(){
              cout << "Enter the value of a ";
              cin >> a;
          }

          void get_value_scintific(){
              cout << "The value cos(a) is " << cos(a) <<endl;
              cout << "The value sin(a) is " << sin(a) <<endl;
              cout << "The value exp(a) is " << exp(a) <<endl;
              cout << "The value tan(a) is " << tan(a) <<endl;
          }

};

class hybrid_calculator: public simple_calculator, public scientifi_calculator{
            // With the help of hybrid_calculator class both the class ( simple_calculator, scientifi_calculator ) are inherited
};

int main()
{
    hybrid_calculator calc;
    calc.set_data_simple();
    calc.get_value_simple();

    calc.set_data_scintific();
    calc.get_value_scintific();
    return 0;
}