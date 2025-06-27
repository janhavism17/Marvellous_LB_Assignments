#include<stdio.h>

typedef unsigned int UNIT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UNIT iNo,int iSize)
{
    int iCnt = 0;
    UNIT iMask = (iSize -1);
    UNIT Result = 0;

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
    int iLocation = 0;
    

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    printf("Enter the position of bit:\n");
    scanf("%d",&iLocation);

    bRet = ChkBit(iValue,iLocation);

    if(bRet == TRUE)
    {
        printf("The %d bit is on in number %d\n",iLocation,iValue);
    }
    else
    {
        printf("The %d bit is Off in number %d\n",iLocation,iValue);
    }
   
    
}