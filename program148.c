#include<stdio.h>

int main()
{
    char Arr[30]; // 30 is memory 

    printf("Enter your name : \n");
                       
    scanf("%[^'\n']s",Arr);   // Accept till first space only 

    printf("Your name is : %s\n",Arr);

    return 0;
}