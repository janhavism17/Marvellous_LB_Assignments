#include<stdio.h>

typedef int BOOL;
typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UNIT iNo)
{
    int iCnt = 0;
    UNIT iMask = 32768;

    if(iNo & iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = 0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == TRUE)
    {
        printf("The 15th bit is ON\n");
    }
    else
    {
        printf("The 15th bit is OFF\n");
    }

    return 0;
}