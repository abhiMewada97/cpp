#include <iostream>
#include <vector>
using namespace std;

void display(vector <int> &v){

    for(int i=0; i < v.size(); i++){
        //cout << v[i] <<" ";  // Both are correct way
        cout << v.at(i) <<" ";  // Both are correct way
    }
    cout <<endl;
}

int main()
{
    vector <int> vec1;
    int element, size;
    cout << "Enter the size of your vector "<<endl;
    cin >> size;
    for(int i = 0; i<size; i++){
        cout << "Enter an element to add to this vector : ";
        cin >> element;
        vec1.push_back(element);
    }
   
    display(vec1);
    vector <int> :: iterator iter = vec1.begin();
    vec1.insert(iter, 566); // It will insert 566 at the beganing
    //vec1.insert(iter+1, 566); // It will insert 566 at the 2nd position
    //vec1.insert(iter+1,5,566);  // // It will insert 566 'five time' at the 2nd position
    display(vec1);
}