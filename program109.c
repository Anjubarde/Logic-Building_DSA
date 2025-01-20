// Input : 4
// Output : 0   -1  -2   -3    -4

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    //      1           2           3
    for(iCnt = 0; iCnt >= -iNo; iCnt--)
    {
        printf("%d\t",iCnt);    // 4
    }


    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}