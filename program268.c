// *    *   *   *   

#include<stdio.h>

void DisplayR()
{
    int iCnt = 1;   // Storage class auto

    if( iCnt <= 4)
    {
        printf("*\n");
        iCnt++;
        DisplayR();     
    }
}

int main()
{
    DisplayR();

    return 0;
}
