#include<stdio.h>

int DiffOfFactor(int iNo)
{
    int iCnt = 0;
    int iSumFactor= 0;
    int iSumNonFactor= 0;
    int idiffrence = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSumNonFactor = iSumNonFactor + iCnt;
            
        }
        else if((iNo % iCnt) == 0)
        {
            iSumFactor = iSumFactor + iCnt;
        }
    }

    idiffrence = iSumNonFactor - iSumFactor;

    return idiffrence;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = DiffOfFactor(iValue);

    printf("Diffrence of Nonfactors and factors of %d is %d",iValue,iRet);
    printf("\n");

    return 0;
}