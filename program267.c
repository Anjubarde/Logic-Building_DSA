// *    *   *   *   

#include<stdio.h>

void DisplayI()
{
    int iCnt = 0;
    
    iCnt = 1;
    while( iCnt <= 4)
    {
        printf("*\n");
        iCnt++;
    }
}

int main()
{
    DisplayI();

    return 0;
}
