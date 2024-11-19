/*
    Input : Row = 4 Col = 4
    a   a   a   a
    b   b   b   b
    c   c   c   c
    d   d   d   d
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = 'a';
    for(i = 1; i <= iRow; i++, ch++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
        // ch++; this is other option 
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Number : \n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    return 0;
}