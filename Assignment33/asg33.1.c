#include<stdio.h>

typedef unsigned int UNIT;

UNIT CountOne(UNIT iNo)
{
    UNIT iMask = 1;
    UNIT Result = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        if(iNo & 1)   
        {
            iCnt++;
        }
        iNo = iNo >> 1;  
    }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    iRet = CountOne(iValue);

    printf("The number of ones : %d\n",iRet);
    
}