#include<stdio.h>

int CountDigits(int iNo)
{
    int iDigit = 0, iCount = 0;

    if(iNo < 0) // Updator
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iCount++;
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);
    printf("Number of digits are : %d\n",iRet);

    return 0;
}