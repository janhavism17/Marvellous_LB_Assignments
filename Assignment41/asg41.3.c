#include<stdio.h>

void Display(int j)
{

    if(j>0)
    {
        printf("%d ",j); 
        j--;
        Display(j);
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