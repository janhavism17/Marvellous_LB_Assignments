#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0 ,j = 0;
    char ch = '\0';

    for(i = 1; i <= iRow ; i++)
    {
        for(j = 1,ch = 'A'; j <= iCol;j++,ch++)
        {
            printf("%c\t",ch);
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