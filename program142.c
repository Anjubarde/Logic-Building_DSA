/*
Input - 
    *   $   $   *
    *   $   $   *
    *   $   $   *
    *   $   $   *
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(j == 1 || j == iCol) // First and LAst
            {
                printf("*\t");
            }
            else         /// BetWeen column 
            {
                printf("&\t"); 
            }
    
        }
        printf("\n");  
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