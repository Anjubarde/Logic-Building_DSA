#include<stdio.h>
/////////////////////////////////////////////////////////////
//  
//  Function Name :  Addition
//  Descriptin :     It is use to perform addtion of 2 float values
//  Input :          Float, Float 
//  Output :         Float
//  Author :         Anjali Arjun Barde 
//  Date :           06/10/2024 -> 11/09/2025(update)
//  
/////////////////////////////////////////////////////////////

float Addition( float fValue1, float fValue2)
{
    float fAdd = 0.0f;                      // Local variable for result 
    if (fValue1 < 0.0f)
    {
        fValue1 = -fValue1;

    }
    if (fValue2 < 0.0f)
    {
        fValue2 = -fValue2;
        
    }
                     
    fAdd = fValue1 + fValue2;               //business Logic  
    return fAdd;        
}

//////////////////////////////////////////////////////////////
//
// This application is used to perform addition f 2 numbers
//
/////////////////////////////////////////////////////////////
int main()
{
    float fNo1 = 0.0f, fNo2 = 0.0f, fAns = 0.0f;

    printf("Enter first number : \n");      //Local variables for input
    scanf("%f",&fNo1);

    printf("Enter second number : \n");
    scanf("%f",&fNo2);

    fAns = Addition(fNo1, fNo2);            // Function call 
    printf("Addition is : %f\n",fAns);

    return 0;
}