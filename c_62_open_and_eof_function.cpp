#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream out;  // jaruri nahi hai ki ham constructor ka use karke file open kare, ham .open ka use karke bhi file open kar sakte hai
    out.open("c_60_0_file_writing.txt");
    out<<"This is me\n";
    out<<"This is also me\n";
    out<<"This is me also\n";
    out.close();

    ifstream in;
    string st, st2;
    in.open("c_60_0_file_writing.txt");
    // in >> st >> st2;
    // cout << st <<" "<< st2;

    while (in.eof() == 0 ){  //eof means end of file
        getline(in, st);
        cout << st << endl;
    }
    in.close();

    return 0;
}