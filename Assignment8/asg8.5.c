#include<stdio.h>

double SquareMeter(int iNo)
{
    if(iNo < 0 )
    {
        iNo = - iNo;
    }
    double dMet = 0.0;
    dMet = iNo * 0.0929;
    return dMet;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in Square feet :");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in Square Meter : %f",dRet);
    printf("\n");


    return 0;
}