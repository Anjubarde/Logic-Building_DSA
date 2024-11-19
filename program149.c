#include<stdio.h>

int main()
{
    char Arr[30]; 
    char *ptr = Arr;

    printf("Enter String : \n");
                       
    scanf("%[^'\n']s",Arr);   // Accept till first space only 

    printf("%c\n",*ptr);
    ptr++;

    printf("%c\n",*ptr);
    ptr++;

    printf("%c\n",*ptr);
    ptr++;

    printf("%c\n",*ptr);
    ptr++;

    printf("%c\n",*ptr);
    ptr++;

    return 0;
}