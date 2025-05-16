#include<stdio.h>

void  OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d ",iCnt); 
        }
        
    }
    printf("\n");
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}