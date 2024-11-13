/*
    START
        Accept the percentage from user
        If percentage are less than 40 then display FAIL
        And if it is greater than or equal to 40 then display PASS
    STOP
*/

#include<stdio.h>

void DisplayResult(float fPercentage)
{
    if(fPercentage >= 40.00f)
    {
        printf("You are PASS\n");
    }
    else
    {
        printf("You are FAIL\n");
    }
}

int main()
{
    float fValue = 0.0f;

    printf("Enter the percentage : \n");
    scanf("%f",&fValue);

    DisplayResult(fValue);

    return 0;
}