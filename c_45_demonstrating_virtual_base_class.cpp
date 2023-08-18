#include <iostream>
using namespace std;
// Inheritance:

// student --> test
// student -->  sports
// test -->  result
// sports -->  result

class student{
    protected:
       int roll_number;

    public:
        void set_number(int a){
            roll_number = a;
        }

        void get_number(){
            cout << "The roll number is : "<< roll_number << endl;
        }
};

class test : virtual public student{
    protected:
           int maths;
           int physics;
    public:
           void set_marks(float m, float p){
               maths = m;
               physics = p;
           }

           void get_marks(){
               cout << "The marks is : "<<endl
                    << maths <<endl
                    << physics << endl;
           }
};

class sports : virtual public student{
    protected:
          int score;
    public:
          void set_score(int sc){
              score = sc;
          }

          void get_score(){
              cout << "The score is : "<< score << endl;
          }
};

class result : public test, public sports{
    protected:
            int total;
    public:
        void display(){

           total = physics + maths + score;

           get_number();
           get_marks();
           get_score();
           cout << "Your total score is : "<< total <<endl;
        }

};

int main()
{
    result abhi;
    abhi.set_marks(98.0, 89.8);
    abhi.set_number(2343342);
    abhi.set_score(9);
    abhi.display();
    return 0;
}