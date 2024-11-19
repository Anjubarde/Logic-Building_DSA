#include<stdio.h>

void Display(char *ptr)
{
    while(*ptr != '\0')
    {
        printf("%c\n",*ptr);
        ptr++;
    }
}

int main()
{
    char Arr[30]; 

    printf("Enter String : \n");                   
    scanf("%[^'\n']s",Arr);  

    Display(Arr);

    return 0;
}