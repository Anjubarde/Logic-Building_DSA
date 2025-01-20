#include<iostream>
using namespace std;

void DisplayBinary(int iNo)
{
    int Digit = 0;

    while(iNo != 0)
    {
        Digit = iNo % 2;
        cout<<Digit;
        iNo = iNo / 2;
    }
        cout<<"\n";

}

int main()
{
    int iValue = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    DisplayBinary(iValue);
    
    return 0;
}