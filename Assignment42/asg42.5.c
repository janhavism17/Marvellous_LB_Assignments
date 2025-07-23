#include<stdio.h>

int Product(int i)
{
    static int iPro = 1;
    static int digit = 0;

    if( i > 0)
    {
        digit = i%10;
        iPro = iPro*digit;
        i = i/10;
        Product(i);
    }

    return iPro ;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:");
    scanf("%d",&iValue);
    iRet = Product(iValue);

    printf("Product:%d\n",iRet);
    return 0;
}