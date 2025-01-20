#include<iostream>
using namespace std;

int OffBit(int iNo, int iPos)
{
    int iMask = oxffffffef;
    int iResult = 0;
    
    iResult = iNo & iMask;
    return iResult;
}

int main()
{
    int iValue = 0, iRet = 0, iLocation = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    cout<<"Enter the position : \n";
    cin>>iLocation;

    iRet = OffBit(iValue,iLocation);

    cout<<"Number after bit OFF : "<<iRet<<"\n";
    
    return 0;
}
/*
                    1   0   1   1   1   0   0   0       iNo
                    1   1   1   0   1   1   1   1       iMask            
                    ______________________________
                    1   0   1   0   1   0   0   0       iResult

                    1   0   1   0   1   0   0   0       iNo
                    1   1   1   0   1   1   1   1       iMask            
                    ______________________________
                    1   0   1   0   1   0   0   0       iResult



                    1111    1111    1111    1111    1111    1111    1110    1111
                    f       f       f       f       f       f       e       f

*/