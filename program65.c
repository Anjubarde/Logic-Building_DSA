#include<stdio.h>

int main()
{
    int Arr[4];
    int iCnt = 0;

    printf("Please enter the values : \n");
    //      1          2       3  
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);//4
    }

    printf("Values from the array are : \n");
    //     1          2        3 
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);//4
    }

    return 0;
}