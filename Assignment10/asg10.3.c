#include<stdio.h>

int CountRange(int iNo)
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
       if((iDigits > 3) && (iDigits < 7))
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

    iRet = CountRange(iValue);
    printf("Frequency of  Number between 3 and 7 is : %d",iRet);

    return 0;
}