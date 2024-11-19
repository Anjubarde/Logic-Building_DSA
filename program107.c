// Input - 5
// Output ->  -1   -2   -3   -4   -5

// There is Mistake in this code pls refer program108.c
#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = iNo; iCnt >= -iNo ; iCnt--)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}