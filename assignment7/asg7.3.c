#include<stdio.h>
//input 
int EvenFactorial(int iNo)
{
    int iCnt = 1;
    int iFact = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
        if(iCnt%2 == 0)
        {
            printf("%d\n", iCnt);
       
        }
    }
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter the numbern: ");
    scanf("%d", &iValue);
    
    iRet = EvenFactorial(iValue);
     printf(" even factorial is : %d\n",iRet);
     return 0;
}