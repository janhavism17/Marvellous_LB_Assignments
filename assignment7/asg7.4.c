#include<stdio.h>
//input 
int OddFactorial(int iNo)
{
    int iCnt = 1;
    int iFact = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt += 2)
    {
        iFact *= iCnt;
    }
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter the numbern: ");
    scanf("%d", &iValue);
    
    iRet = OddFactorial(iValue);
     printf(" odd factorial is : %d\n",iRet);
     return 0;
}