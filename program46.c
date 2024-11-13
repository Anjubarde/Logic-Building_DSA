#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)    // 15
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))

    {   return true;    }
    else
    {   return false;   }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);
    if(bRet == true)
    {   printf("%d is divisible by 3 & 5\n",iValue);    }
    else 
    {   printf("%d is not divisible by 3 or 5\n",iValue);    }
    return 0;
}

/*
-------------------------------------------------------
    Operand 1       Operand 2       &&          ||
-------------------------------------------------------
    true            true            true        true
    true            false           false       true
    false           true            false       true
    false           false           false       false
-------------------------------------------------------
*/