#include<stdio.h>

double FhToCs(float iNo)
{
    double dCel = 0;
    dCel = (iNo - 32) * (5.0 / 9.0);
    return dCel;
}

int main()
{
    float fValue = 0;
    double dRet = 0;

    printf("Enter Temperature:");
    scanf("%f",&fValue);

    dRet = FhToCs(fValue);

    printf("Temparature : %f",dRet);
    printf("\n");


    return 0;
}