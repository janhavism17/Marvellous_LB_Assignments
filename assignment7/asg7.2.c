#include<stdio.h>
int DollorToINR(int iNo)
{
    int iCnt = 0, iMult = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iMult = iCnt * 70;
    }        
    return iMult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
     
    printf("enter number of USD ");
    scanf("%d",&iValue);

    iRet = DollorToINR(iValue);

    printf(" value in INR is %d",iRet);

    return 0;

}