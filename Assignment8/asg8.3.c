#include<stdio.h>

int KMtoMeter(int iNo)
{
    if(iNo < 0 )
    {
        iNo = - iNo;
    }
    int iMet = 0;
    iMet = iNo * 1000;
    return iMet;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Distance :");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter : %d",iRet);
    printf("\n");


    return 0;
}