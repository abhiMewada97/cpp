#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testCase;
	cin >> testCase;
	
	while(testCase--)
	{
	    int flag = 1,length;
	    cin>>length;
	    string s[length];
	    int k=length/2;

	    for(int i=0; i<length;i++)
	        cin>>s[i];
	        
	    for(int i=0; i<length/2;i++)
	    {
	        if(s[i] != s[k])
	        {
	            flag = 0;
	            break;
	        }
	        
	        k++;
	    }

	    if(flag)
	       cout<<"NO"<<endl;
	    
	    else
	        cout<<"YES"<<endl;
	}
	
	return 0;
}
