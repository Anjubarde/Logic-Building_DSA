/*
    8   9.30
    9   10.30
    10  11.30
*/

#include<stdio.h>

void DisplayTimeTable(int iStd)
{
    switch(iStd)
    {
        case 8:
            printf("Your exam is at 9.30 AM\n");
            break;

        case 9:
            printf("Your exam is at 10.30 AM\n");
            break;

        case 10:
            printf("Your exam is at 11.30 AM\n");
            break;

        default:
            printf("Sorry we dont have the information about your standard\n");
            break;
    }
}

int main()
{
    int iValue = 0;

    printf("Please enter your standard : \n");
    scanf("%d",&iValue);

    DisplayTimeTable(iValue);

    return 0;
}