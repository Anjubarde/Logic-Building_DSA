#include<iostream>
using namespace std;

int Addition(int iValue1 , int iValue2)
{
    int iResult = 0;
    iResult = iValue1 + iValue2;
    return iResult;
}

int main()
{
    int iNo1 = 0, iNo2 = 0, iAns = 0;
    
    cout<<"Enter first number : \n";
    cin>>iNo1;

    cout<<"Enter second number : \n";
    cin>>iNo2;
    
    iAns = Addition(iNo1, iNo2);

    cout<<"Addition is : "<<iAns<<"\n";
    
    return 0;
}