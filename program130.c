// Input : 5
// Output : a   1   b   2   c   3   d   4   e   5

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = '\0';
    for(iCnt = 1, ch = 97; iCnt <= iNo; iCnt++, ch++)
    {
        printf("%d\t%c\t",iCnt,ch);   
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}