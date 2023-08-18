#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void one_compliment(void);
    void display(void);
};

void binary :: read(void)
{
    cout<<"Enter the binary no. "<<endl;
    cin>>s;
}

void binary :: chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout<<"This is not binary number"<<endl;
            exit(0);
        }
        
    }
    
}

void binary :: one_compliment(void)
{
    chk_bin();

    for(int i=0; i< s.length(); i++)
    {
        if(s.at(i)=='0')
           s.at(i) = '1';
        
        else
           s.at(i) = '0';
        
    }
}

void binary :: display(void)
{
    cout<<"Display binary"<<endl;
    for(int i=0; i< s.length(); i++)
    cout<< s.at(i);
    cout<<endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin();    //hamne ek esha function banaya jishe hamne implementation datail se jhupa liya 
    b.display();
    b.one_compliment();
    b.display();

    return 0;
}