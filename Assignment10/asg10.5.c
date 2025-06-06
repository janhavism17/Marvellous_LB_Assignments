#include<stdio.h>

int Diff(int iNo)
{
    int iDigit = 0;
    int iSumEven = 0;
    int iSumOdd = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)
        {
            iSumEven = iSumEven + iDigit;
        }
        else
        {
            iSumOdd = iSumOdd + iDigit;
        }

        iNo = iNo / 10;
    }

    return iSumEven - iSumOdd;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d", &iValue);

    iRet = Diff(iValue);

    printf("Difference between summation of even and odd digits : %d\n", iRet);

    return 0;
}