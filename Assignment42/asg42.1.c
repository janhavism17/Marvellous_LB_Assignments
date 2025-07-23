#include<stdio.h>

void Display(int i)
{
    static int iNo = 0;
    iNo = i;
    if( i > 0)
    {
        printf("%d",iNo);
        printf("*");
        Display(--iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number:");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}