#include<iostream>
using namespace std;

int AdditionI(int Arr[], int iSize)
{
    int iSum = 0;
    int i = 0;

    for(i = 0; i < iSize ; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}

int main()
{
    int Brr[] = {10,20,30,40};
    int iRet = 0;

    iRet = AdditionI(Brr,4);

    cout<<"Addition is : "<<iRet<<"\n";
    
    return 0;
}