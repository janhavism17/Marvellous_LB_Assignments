#include<stdio.h>


typedef unsigned int UNIT;


UNIT ChkBit(UNIT iNo,int iPos)
{
    UNIT iMask = 1;
    UNIT Result = 0;

    iMask = iMask << (iPos - 1);

    Result = iNo & (~iMask);;
    
   return Result;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    int iLocation = 0;
    

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    printf("Enter the position of bit:\n");
    scanf("%d",&iLocation);

    iRet = ChkBit(iValue,iLocation);

    printf("The chnaged value is : %d\n",iRet);
    
}