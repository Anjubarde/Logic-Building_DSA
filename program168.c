#include<stdio.h>

// Input : Abiut CstAfB
// Output : 4
// ABab

int Count(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == 'A' || *str == 'B' || *str == 'a' || *str == 'b')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = Count(Arr);  

    printf("Number is : %d\n",iRet);

    return 0;
}