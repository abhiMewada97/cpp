#include <iostream>
using namespace std;
int main()
{
    int arr[4] = {23, 43, 124, 5231};

    // --------->>>     Using for loop  <<<-----------
    // for (int i = 0; i <= 4; i++)
    // {
    //     cout<<arr[i]<<endl;
    // }

    // --------->>>     Using while loop  <<<-----------
    // int i = 0;
    // while (i <= 3)
    // {
    //     cout<<arr[i]<<endl;
    //     i++;
    // }    

    // --------->>>     Using do while loop  <<<-----------
    int i = 0;
    do
    {
        cout<<arr[i]<<endl;
        i++ ;
    }while(i <= 3);

    return 0;
}