#include<stdio.h>

float Divide(int iNo1, int iNO2)
{
    int iAns = 0;

    if(iNo1 == 0)
    {
        return -1;
    }
    iAns = iNo1 / iNO2;
    return iAns;
}

int main()
{
    int iValue1 = 15 , iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1,iValue2);

    printf("Division is : %d\n",iRet);

    return 0;
}