#include<stdio.h>

void  MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iMulti = 0; 

    for(iCnt = 1; iCnt <= 5 ; iCnt++)
    {
        iMulti = iNo * iCnt;
        printf("%d ",iMulti); 
        
    }
    printf("\n");
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}