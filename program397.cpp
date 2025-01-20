#include<iostream>
using namespace std;

template <class T>
T Addition(T no1, T no2)
{
    T Ans;
    Ans = no1 + no2;
    return Ans;
}

int main()
{
    int iRet = 0;
    float fRet = 0.0f;
    double dRet = 0.0;

    iRet = Addition(11,10);
    cout<<"Addition of integers is : "<<iRet<<"\n";

    fRet = Addition(11.7f,10.2f);
    cout<<"Addition of floats is : "<<fRet<<"\n";

    dRet = Addition(11.709,10.212);
    cout<<"Addition doubles is : "<<dRet<<"\n";

    return 0;
}