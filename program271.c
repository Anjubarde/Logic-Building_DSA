// *    *   *   *   

#include<stdio.h>

void DisplayI(int iNo)
{
    int iCnt = 0;
    
    iCnt = 1;
    while( iCnt <= iNo)
    {
        printf("*\n");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iValue);

    DisplayI(iValue);

    return 0;
}
