#include<stdio.h>

double RectArea(float iNo1, float iNo2)
{
    double dArea = 0.0;
    dArea = iNo1 * iNo2;

    return dArea;
}


int main()
{
    float fValue1 = 0.0,fValue2 = 0;
    double dRet = 0.0;

    printf("Enter the Width :");
    scanf("%f",&fValue1);

    printf("Enter the Height :");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of Rectangle is :%f",dRet);

    return 0;
}