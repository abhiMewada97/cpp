#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst){

    list<int> :: iterator it;
    for(it=lst.begin(); it!=lst.end(); it++){
        cout << *it <<" ";
    }
    cout << endl;
}

int main()
{
    list <int> list1;
    list1.push_front(12);  //Enter element befor other element
    list1.push_back(5);     //Insert element after other element
    list1.push_back(7);     //Insert element after other element
    list1.push_back(9);     //Insert element after other element
    list1.push_front(1);  //Enter element befor other element
    display(list1);

//Removing element from the list

    // list1.pop_back();  //delete last element
    //list1.pop_front();    //delete first element
    // list1.remove(7);     //It will all element that you want
    //list1.sort();        //sorting the list
    // display(list1);
    

    list<int> list2(3);
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    *iter = 3;
    display(list2);

    list1.merge(list2);
    cout << "list1 after the merging list1 and list2 \n";
    display(list1);

    return 0;

}