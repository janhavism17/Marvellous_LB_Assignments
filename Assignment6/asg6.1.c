#include<stdio.h>
void Number(int iNo)
{
    if((iNo > 0) || (iNo <= 50))
    {
        printf("small\n");
        return;
    }
    else if(( iNo > 50) || (iNo <= 100))
    {
        printf("medium\n");
        return;
    }
    else if((iNo > 100))
    {
        printf(" large");
        return;
    }
}
int main()
{
    int iValue = 0;
    printf("enter number :");
    scanf("%d",&iValue);
    Number(iValue);
    return 0;
}
