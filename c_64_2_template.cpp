#include <iostream>
using namespace std;

template <class T>   // in place of data type we use data type
class vector{  //ye custom vector class hai, custom means vector class hamne khud se banai hai
    public:
        T *arr;
        int size;

            vector(int m){
                size = m;
                arr = new T[size];
            }

        T dotProduct(vector &v){
            T d = 0;
            for (int i=0; i<size; i++){
                d += this->arr[i] * v.arr[i];
            }
            return d;
        }        
};

int main(){
   
    // vector v1(3);
    vector <float>v1(3);  // in place of "float" we can use any "data type"
    v1.arr[0] = 4.2;
    v1.arr[1] = 3.2;
    v1.arr[2] = 1.5;

    vector <float>v2(3);
    v2.arr[0] = 1.3;
    v2.arr[1] = 0.3;
    v2.arr[2] = 1.6;

    float a = v1.dotProduct(v2);
    cout << a << endl;
    return 0;
}