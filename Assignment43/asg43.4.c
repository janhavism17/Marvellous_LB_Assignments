#include<stdio.h>

int Min(int i)
{
    static int iDigit = 0;
    int imin = i;

    if(i != 0)
    {
        iDigit = i%10;
        
        if(iDigit < imin)
        {
            imin = iDigit;
        }
        i = i/10;
        Min(i);
    }
    
    return imin;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    iRet = Min(iValue);
    printf("Minimum digit is : %d\n",iRet);

    return 0;
}