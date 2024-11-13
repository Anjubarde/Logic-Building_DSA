#include<stdio.h>
#include<stdlib.h>

int AdditionOdd(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iSum = iSum + Arr[iCnt];
        }
    }
    return iSum;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    iRet = AdditionOdd(ptr,iLength);
    printf("Addition of odd elements : %d\n",iRet);
    free(ptr);

    return 0;
}
