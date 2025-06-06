#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool CheckZero(int iNo)
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
        
        if(iDigits == 0)
        {
        return TRUE;
        break;
        }
        iNo = iNo / 10;
        iCnt++;
    }

    return FALSE;
    
    
    
    
}

int main()
{
    int iValue = 0;
    bool bRet = FALSE;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == TRUE)
    {
        printf("Has zero in it");
    }
    else
    {
        printf("Has no zero in it");
    }

    return 0;
}