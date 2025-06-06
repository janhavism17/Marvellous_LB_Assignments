#include<stdio.h>

int MultiDigits(int iNo)
{
    int iCnt = 0;
    iCnt = 1;
    int iDigits = 0;
    int iMulti = 1;

    if(iNo < 0 )
    {
        iNo = - iNo;
    }

    while (iNo != 0)
    {
        iDigits = iNo % 10 ;
        iMulti = iMulti * iCnt;
        iNo = iNo / 10;
        iCnt ++;
    }
    
    return iMulti;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    iRet = MultiDigits(iValue);
    printf("Multiplication of digits : %d",iRet);

    return 0;
}