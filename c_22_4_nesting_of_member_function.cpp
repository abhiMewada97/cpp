#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;
    void chk_bin(void);

public:
    void read(void);
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
    b.chk_bin();           //it will give error becouse this is private function
                           //private ko, class ke method hi use ker sakte hai 
                           //eshe bahar se directly call nahi kiya ja sakta hai
    b.display();
    b.one_compliment();
    b.display();

    return 0;
}