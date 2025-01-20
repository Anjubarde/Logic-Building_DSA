#include<iostream>
using namespace std;

int main()
{
    int iValue = 0;
    int iMask = 2;
    int iResult = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    iResult = iValue & iMask;

    if(iResult == 0)
    {
        cout<<"Second bit is OFF\n";
    }
    else
    {
        cout<<"Second bit is ON\n";
    }
    
    return 0;
}