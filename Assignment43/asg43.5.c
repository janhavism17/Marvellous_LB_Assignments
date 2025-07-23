#include<stdio.h>

int Max(int i)
{
    static int iDigit = 0;
    static int num = 0;

    if(i != 0)
    {
        iDigit = i%10;
        i = i/10;
        num = num*10 +iDigit;
        Max(i);
    }
    
    return num;
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