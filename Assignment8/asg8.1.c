#include<stdio.h>

double CircleArea(float iNo)
{
    double dArea = 0.0;
    dArea = 3.14 * iNo * iNo;

    return dArea;
}


int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter the Radius :");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is :%f",dRet);

    return 0;
}