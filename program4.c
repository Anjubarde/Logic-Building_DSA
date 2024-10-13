#include<stdio.h>

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iAns = 0;

    printf("Enter first number : \n");
    scanf("%d",&iNo1); // Accept the input 

    printf("Enter Second Number : \n");
    scanf("%d",&iNo2); // %d --> Format specifier 

    iAns = iNo1 + iNo2;

    printf("Answer is : %d\n",iAns);
    
    return 0;
}
