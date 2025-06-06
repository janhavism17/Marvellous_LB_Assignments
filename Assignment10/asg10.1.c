#include<stdio.h>

int CountEven(int iNo)
{
    int iCnt = 0;
    int iDigits = 0;

    if(iNo < 0 )
    {
        iNo = - iNo;
    }

    while (iNo != 0)
    {
       iDigits = iNo % 10 ;
       if((iDigits % 2) == 0)
       {
        iCnt++;
       }
       iNo = iNo / 10;
    }
    
    return iCnt;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);
    printf("Frequency of Even Number is : %d",iRet);

    return 0;
}