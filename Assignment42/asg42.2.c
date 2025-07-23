#include<stdio.h>

int Sum(int i)
{
    static int iSum = 0;
    static int digit = 0;

    if( i > 0)
    {
        digit = i%10;
        iSum = iSum +digit;
        i = i/10;
        Sum(i);
    }

    return iSum ;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:");
    scanf("%d",&iValue);
    iRet = Sum(iValue);

    printf("Sum:%d",iRet);
    return 0;
}