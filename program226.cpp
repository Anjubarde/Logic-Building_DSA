#include<iostream>
using namespace std;

int OnBit(int iNo, int iPos)
{
    int iMask = 0x1;
    int iResult = 0;
    
    iMask = iMask << (iPos -1);
    
    iResult = iNo | iMask;
    return iResult;
}

int main()
{
    int iValue = 0, iRet = 0, iLocation = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    cout<<"Enter the position : \n";
    cin>>iLocation;

    iRet = OnBit(iValue,iLocation);

    cout<<"Number after bit ON : "<<iRet<<"\n";
    
    return 0;
}               
/*
                    1   0   1   1   1   0   0   0       iNo
              |     0   0   0   1   0   0   0   0       iMask            
                    ______________________________
                    1   0   1   1   1   0   0   0       iResult


                    1   0   1   0   1   0   0   0       iNo
              |     0   0   0   1   0   0   0   0       iMask            
                    ______________________________
                    1   0   1   1   1   0   0   0       iResult


*/