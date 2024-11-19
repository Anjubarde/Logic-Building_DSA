// Row = 4
// Column = 4

/*
    &   *   *   *
    *   &   *   *
    *   *   &   *
    *   *   *   &
*/

#include<stdio.h>
void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    //    1       2        3
    for(i = 1; i <= iRow; i++)     // Outer (Rows)
    {
        //    1        2       3
        for(j = 1; j <= iCol; j++) // Inner (Columns)
        {
            if(i == j)
            {
                printf("&\t");  
            }
            else
            {
                printf("*\t");  
            }
        }
        printf("\n");
    } 
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of row : \n");
    scanf("%d",&iValue1);

    printf("Enter the number of colum : \n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    return 0;
}