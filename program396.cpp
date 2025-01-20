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
    double iRet = 0.0;

    iRet = Addition(11.7,10.2);

    cout<<"Addition is : "<<iRet<<"\n";

    return 0;
}