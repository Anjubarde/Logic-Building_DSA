#include<iostream>
using namespace std;

float AdditionI(float Arr[], int iSize)
{
    float iSum = 0.0f;
    int i = 0;

    for(i = 0; i < iSize ; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}

int main()
{
    float Brr[] = {10.8f,20.4f,30.9f,40.5f};
    float iRet = 0.0f;

    iRet = AdditionI(Brr,4);

    cout<<"Addition is : "<<iRet<<"\n";
    
    return 0;
}