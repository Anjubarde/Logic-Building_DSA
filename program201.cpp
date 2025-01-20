#include<iostream>
using namespace std;

int main()
{
    int No = 83;
    int Digit = 0;

    while(No != 0)
    {
        Digit = No % 2;
        cout<<Digit;
        No = No / 2;
    }

    cout<<"\n";
    
    return 0;
}