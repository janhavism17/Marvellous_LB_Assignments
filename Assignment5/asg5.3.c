#include<stdio.h>

void  Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo ; iCnt++)
    {
        printf("%d ",iCnt); 
    }
    printf("\n");
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}