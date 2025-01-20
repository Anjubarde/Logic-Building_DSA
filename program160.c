#include<stdio.h>

void Display(char *str)
{
    int i = 0;
    printf("Entered string is : \n");

    for(i = 0; str[i] != '\0'; i++)
    {
        printf("%c\n",str[i]);
    }
}

int main()
{
    char Arr[30];

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);   // Display(100);

    return 0;
}