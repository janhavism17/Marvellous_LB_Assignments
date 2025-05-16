#include<stdio.h>
void Nonfactors(int iNo)
{
    int iCnt=0;
    if(iNo < 0) //updator
    {
        iNo = -iNo;
    }
    for(iCnt= 1; iCnt < iNo; iCnt++ )
    {
       if ((iNo % iCnt) != 0)
       {
        printf("non factor is %d",iCnt);
       }
    }
// time complexity is O(N/2)
}


int main()
{
    int iValue = 0;
    printf("Enter number :\n");
    scanf("%d", &iValue);

    Nonfactors(iValue);
    return 0;
}