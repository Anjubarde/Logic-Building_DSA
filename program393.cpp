#include<iostream>
using namespace std;

int AdditionI(int no1, int no2)
{
    int Ans = 0;
    Ans = no1 + no2;
    return Ans;
}

int main()
{
    int iRet = 0;

    iRet = AdditionI(11,10);

    cout<<"Addition is : "<<iRet<<"\n";

    return 0;
}