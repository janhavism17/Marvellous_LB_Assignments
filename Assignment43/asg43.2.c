#include<stdio.h>

int Max(int i)
{
    static int iDigit = 0;
    static int imax = 0;

    if(i != 0)
    {
        iDigit = i%10;
        if(iDigit > imax)
        {
            imax = iDigit;
        }
        i = i/10;
        Max(i);
    }
    
    return imax;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    iRet = Max(iValue);
    printf("Max digit is : %d\n",iRet);

    return 0;
}