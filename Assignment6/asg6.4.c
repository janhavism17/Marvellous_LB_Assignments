#include<stdio.h>
void Table(int iNo)
{
    int iCnt = 0;
    int iMult = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= 10; iCnt++)

{
    iMult = iNo * iCnt;
        printf("%d ",iMult); 
        
} 
        


}
int main()
{
    int iValue = 0;

    printf("enter the number:");
    scanf("%d",&iValue);

    Table(iValue);
    return 0;
}