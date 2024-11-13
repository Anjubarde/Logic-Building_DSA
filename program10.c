#include<stdio.h>
/*
    Step1 : Understand the problem statement
    Step2 : Write the algorithm
    Step3 : Decide the programming language
    Step4 : Write the program
    Step5 : Test the program
*/

/*
    Problem Statement : 
    Write a program which is used to perform ADDITION of two numbers.
*/

/*
    Step1 : Understand the problem statement
    User is going to enter the data in decimal format.
    If entered data is negative we have to convert it to positive value.
*/

/*
    Step2 : Write the algorithm

    START
        Accept first input
        Accept second input
        If any of the input is negative then convert it into positive
        Perform the addition of that accepted values
        Display the addition
    STOP
*/

/*
    Step3 : Decide the programming language
    According to the problem statement we selct C programming.
*/

/*
    Step4 : Write the program
*/

////////////////////////////////////////////////////////////////////////////////
//  
//  Function Name : Addition
//  Description :   It is used to perform addition of 2 float values
//  Input :         Float, Float
//  Output :        Float
//  Author :        Piyush Manohar Khairnar (MC0092)
//  Date :          06/10/2024
//
////////////////////////////////////////////////////////////////////////////////


float Addition(float fValue1, float fValue2)
{
    float fAdd = 0.0f;                                  // Local variable for result

    // Updator
    if(fValue1 < 0.0f)
    {
        fValue1 = -fValue1;
    }

    if(fValue2 < 0.0f)
    {
        fValue2 = -fValue2;
    }

    fAdd = fValue1 + fValue2;                           // Business Logic
    return fAdd;    
}

////////////////////////////////////////////////////////////////////////////////
//
//  This application is used to perform addition of 2 numbers
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    float fNo1 = 0.0f, fNo2 = 0.0f, fAns = 0.0f;        // Local variables for input

    printf("Enter first number : \n");
    scanf("%f",&fNo1);

    printf("Enter second number : \n");
    scanf("%f",&fNo2);
    
    fAns = Addition(fNo1, fNo2);                        // Function call

    printf("Addition is : %f\n",fAns);
    
    return 0;
}

/*
    Step5 : Test the program
    
    Testcase 1
    Enter first number :            
    10.0
    Enter second number : 
    20.0
    Addition is : 30.000000
    
    Testcase 2
    Enter first number : 
    -10.0
    Enter second number : 
    20.0
    Addition is : 30.000000
    
    Testcase 3
    Enter first number : 
    10.0
    Enter second number : 
    -20.0
    Addition is : 30.000000
    
    Testcase 4
    Enter first number : 
    -10.0
    Enter second number : 
    -20.0
    Addition is : 30.000000
*/