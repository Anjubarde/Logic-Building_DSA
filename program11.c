#include<stdio.h>

int main()
{
    float fRadius = 0.0f;
    float fArea = 0.0f;

    printf("Enter the radius of circle\n");
    scanf("%f",&fRadius);

    fArea = 3.14f * fRadius * fRadius;

    printf("Area of circle is : %f\n",fArea);

    return 0;
}