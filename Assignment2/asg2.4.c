#include<stdio.h>

void Display(int iNo ,int iFrequency)
{
    int iCnt = 0;

    for(iCnt= 1;iCnt<=iFrequency;iCnt++)
    {
        printf("%d",iNo);
    }

}

int main()
{
    int iValue = 0 , iCount = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    printf("Enter another Number :");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}