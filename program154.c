#include<stdio.h>

int Count(char *ptr)
{
    int iCount = 0;
        if(*ptr >= 'a' & *ptr <= 'z');
        {
            iCount++;
        }
    
    return iCount;
}

int main()
{
    char Arr[30]; 
    int iRet = 0;

    printf("Enter String : \n");                   
    scanf("%[^'\n']s",Arr);  

    iRet = Count(Arr);

    printf("Count of small letter is : %d\n",iRet);

    return 0;
}