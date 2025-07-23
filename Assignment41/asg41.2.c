#include<stdio.h>

void Display(int j)
{

    static int i =1;
    if(j>0)
    {
        printf("%d ",i); 
        i++;
        Display(--j);
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