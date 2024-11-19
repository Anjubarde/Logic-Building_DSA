#include<stdio.h>

int main()
{
    char Arr[30];

    printf("Enter your name : \n");
                        // Accept till first space only 
    scanf("%s",Arr);   // No need of & because internally Arr Array is base address of array 

    printf("Your name is : %s\n",Arr);

    return 0;
}