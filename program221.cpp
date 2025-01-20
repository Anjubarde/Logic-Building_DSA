#include<iostream>
using namespace std;

int main()
{
    int iValue = 0;
    int iMask = 0x10;
    int iResult = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    iResult = iValue ^ iMask;

    cout<<"Number after bit toggle : "<<iResult<<"\n";
    
    return 0;
}


/*
    int iNo = 25        0   0   0   1   1   0   0   1


                        0   0   0   0   1   0   0   1           this is 9 in decimal



                        0   0   0   1   1   0   0   1           iNo
             ^          0   0   0   1   0   0   0   0           iMask
                     ___________________________________
                        0   0   0   0   1   0   0   1           iResult


                        0   0   0   0   1   0   0   1           iNo
             ^          0   0   0   1   0   0   0   0           iMask
                     ___________________________________
                        0   0   0   1   1   0   0   1           iResult
*/