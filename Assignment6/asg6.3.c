#include<stdio.h>
//input 
int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter the numbern: ");
    scanf("%d", &iValue);
    
    iRet = Factorial(iValue);

     return 0;
}