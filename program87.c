#include<stdio.h>
#include<stdlib.h>

void AdditionEvenOdd(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSumEven = 0, iSumOdd = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }
    printf("Addition of even elements : %d\n",iSumEven);
    printf("Addition of odd elements : %d\n",iSumOdd);
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    AdditionEvenOdd(ptr,iLength);
    free(ptr);

    return 0;
}
