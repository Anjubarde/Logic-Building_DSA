#include<stdio.h>


void DisplayTimeTable(int iStd)
{
    if(iStd == 8)
    {
        printf("your eaxm time is 9:30 AM ");
    }
    else if(iStd == 9)
    {
        printf("your eaxm time is 10:30 AM ");
    }
    else if(iStd == 10)
    {
        printf("your eaxm time is 11:30 AM ");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Please enter your sandard : \n");
    scanf("%d",&iValue);

    DisplayTimeTable(iValue);

    return 0 ;

}