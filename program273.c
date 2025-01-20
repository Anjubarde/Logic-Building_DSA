#include<stdio.h>

void DisplayI(int iNo)
{
    int iCnt = 1;

    while(iCnt <= iNo)
    {
        printf("%d\n",iCnt);
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iValue);

    DisplayI(iValue);

    printf("End of main\n");
    
    return 0;
}
