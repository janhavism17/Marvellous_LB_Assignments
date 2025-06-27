#include<stdio.h>

typedef int BOOL;
typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UNIT iNo)
{
    int iCnt = 0;
    UNIT iMask = 0;
    UNIT iResult = 0;
    UNIT iMask1 = 0x00000080;
    UNIT iMask2 = 0x00000200;
    UNIT iMask3 = 0x00200000;

    iMask = iMask1 | iMask2 | iMask3 ;

    iResult = iNo & iMask;

    if(iResult == 0 )
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
        printf("The 7th,15th,21th and 28th bit is ON\n");
    }
    else
    {
        printf("The 7th,15th,21th and 28th bit is OFF\n");
    }

    return 0;
}