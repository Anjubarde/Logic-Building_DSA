#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;

    iCnt = 1;
    while(iCnt <= iValue)
    {
        printf("%d Jay Ganesh...\n",iCnt);
        iCnt++;
    }
}

int main()
{
    int iFrequency = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iFrequency);

    Display(iFrequency);

    return 0;
}