#include<stdio.h>

void Display(int iNo)
{

    static char z = 'A';
    if(iNo > 0 )
    {
        printf("%c ",z);
        z++; 
        iNo--;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}