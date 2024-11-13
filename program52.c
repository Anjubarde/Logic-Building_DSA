#include<stdio.h>

int main()
{
    int iNo = 78945;
    int iDigit = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }

    return 0;
}