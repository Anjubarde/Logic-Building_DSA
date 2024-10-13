#include<stdio.h>

float CircleArea(float fRadius)
{
    float fArea = 0.0f;
    fArea = 3.14f * fRadius * fRadius;
    return fArea;
}

int main()
{
    float fValue1 = 0.0f;                          
    float fResult = 0.0f;                            

    printf("Enter the radius of circle\n");
    scanf("%f", &fValue1);

    fResult = CircleArea(fValue1);

    fResult = 3.14f * fValue1 * fResult ;
    //      3.14  * 10.5    * 10.5
    printf("Area of cirlce is : %f\n",fResult);

    return 0;
}