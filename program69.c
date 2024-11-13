#include<stdio.h>

void Display(int *ptr, int iSize)
{
    int iCnt = 0;
    printf("Values of the array are : \n");
    
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("%d\n",*ptr);
        ptr++;
    }
}

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
    Display(Arr,4);   // Display(100,4);

    return 0;
}