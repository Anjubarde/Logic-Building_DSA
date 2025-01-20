#include<iostream>
using namespace std;

bool CheckBit(int iNo)
{
    int iMask = 0x44;
    int iResult = 0;
    iResult = iNo & iMask;

    if(iResult == iMask)
    {   return true;   }
    else
    {   return false;    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter number : \n";
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout<<"3rd and 7th Bits are ON\n";
    }
    else
    {
        cout<<"3rd and 7th Bits are OFF\n";
    }
    
    return 0;
}


//      0100    0100
//      4       4
//      0x44