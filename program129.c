// Input : 5
// Output : A   B   C   D   E

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = '\0';
    for(iCnt = 1, ch = 65; iCnt <= iNo; iCnt++, ch++) // ascii value A = 65
    {
        printf("%c\t",ch);   
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