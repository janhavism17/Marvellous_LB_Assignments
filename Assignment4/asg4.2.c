#include<stdio.h>

void  DisplayFactor(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt > 0 ; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt); 
        }
    }
   
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}