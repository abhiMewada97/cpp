#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // connect our file with hout stream
    ofstream hout("c_61_0_file_reading_and_writing.txt");

    // creating a name string and filling it with string entered by user
    cout << "Enter your name : " <<endl;
    string name;
    cin >> name;

    //writing a string to the file
    hout << "My name is " + name;
    hout.close();

    ifstream hin("c_61_0_file_reading_and_writing.txt");
    string content;
    // hin >> content;  //this will read only firsth word
    getline(hin, content);  //this will read only one line
    cout << "The content of this file is : " << content <<endl;
    hin.close();

    return 0;

}