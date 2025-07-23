#include<stdio.h>

int Factorial(int i)
{
    static int iFact = 1;

    if(i >0)
    {
        iFact = iFact*i;
        i--;
        Factorial(i);
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:");
    scanf("%d",&iValue);
     
    iRet = Factorial(iValue);
    printf("Factorial is :%d\n",iRet);

    return 0;
}