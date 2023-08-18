#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map <string, int> marksMap;
    marksMap["rohan"] = 34;
    marksMap["abhishek"] = 99;
    marksMap["harry"] = 98;

    // insert({{"Kozume", 169.2},{"Kuroo", 187.7}});
    marksMap.insert({{"Kozume", 169},{"Kuroo", 187}});
    map <string, int> :: iterator iter;
    
    for( iter = marksMap.begin(); iter != marksMap.end(); iter++){
        cout << (*iter).first <<" " << iter->second <<endl;   // *iter karne se itrator me jo value hogi bo milegi abh ham ushme .first & .second karke ushki value exist kar sakte hai
        // *iter karne se ham ush sphere ko point kar sakte hai
    }
    cout << "The size is : "<<marksMap.size() <<endl;
    cout << "The max size is : "<<marksMap.max_size() <<endl;
    cout << "The empty's return value is : "<<marksMap.empty() <<endl;
    return 0;
}