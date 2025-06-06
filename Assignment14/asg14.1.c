#include<stdio.h>More actions

void Pattern(int iRow,int iCol)
{
    int i = 0 ,j = 0;
    int iCnt = 0;

    for(i = 1,iCnt= 1; i <= iRow ; i++)
    {
        for(j = 1; j <= iCol;j++,iCnt++)
        {
            if(iCnt > 9)
            {
                iCnt = 1;
            }
            printf("%d\t",iCnt);
        }
        printf("\n");
    }
    
    
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Number of Row:");
    scanf("%d",&iValue1);

    printf("Enter Number of Colums :");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

}