#include<stdio.h>
//---------------------------------------------------------------------
float Addition( float fValue1, float fValue2)
{
    float fAdd = 0.0f;                   
    fAdd = fValue1 + fValue2;               
    return fAdd;        
}
//---------------------------------------------------------------------
int main()
{
    float fNo1 = 0.0f, fNo2 = 0.0f, fAns = 0.0f;

    printf("Enter first number : \n");     
    scanf("%f",&fNo1);

    printf("Enter second number : \n");
    scanf("%f",&fNo2);

    fAns = Addition(fNo1, fNo2);            
    printf("Addition is : %f\n",fAns);

    return 0;
}
//--------------------------------------------------------------------