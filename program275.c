#include<stdio.h>

// Input : 4
// Output : 4   3   2   1

void DisplayI(int iNo)
{
    while(iNo >= 1)
    {
        printf("%d\n",iNo);
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iValue);

    DisplayI(iValue);

    printf("End of main\n");
    
    return 0;
}
