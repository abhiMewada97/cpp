#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string st = "Abhishek bro ";
    string st2;
    
    // Open file using constructor and writing it*******************************************

    //                                            // it will delete then write
    // ofstream out("c_60_0_file_writing.txt");  // write operator
    // out << st;           // Open file using constructor and writing it

    // Open file using constructor and reading it*******************************************
    
    ifstream in("c_60_0_file_reading.txt");  // reading operator
    // in >> st2;    //read only first word
    getline(in, st2);  //read only one line
    cout << st2;

    return 0;
}