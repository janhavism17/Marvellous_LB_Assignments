#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iCnt = 0;
    int iDigits = 0;
    if(iNo < 0 )
    {
        iNo = - iNo;
    }
    while (iNo != 0)
    {
       iDigits = iNo % 10 ;
       printf("%d \n",iDigits);
       iNo = iNo / 10;
       iCnt++;
    }
    
    
    
}

int main()
{
    int iValue = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}