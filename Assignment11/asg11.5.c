#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= (2*iNo); iCnt++)
    {
        if( iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        }
        
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    Pattern(iValue);

}