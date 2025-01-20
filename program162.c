#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlen(Arr);  

    printf("String length is : %d\n",iRet);

    return 0;
}