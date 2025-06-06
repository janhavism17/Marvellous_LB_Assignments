#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0 ,j = 0;
    char ch = '\0';

    for(i = 1; i <= iRow ; i++,ch++)
    {
        for(j = 1, ch = 'a'; j <= iCol;j++,ch++)
        {
            if(i % 2 == 0)
            {
                printf("%d\t",j);
            }
            else
            {
                printf("%c\t",ch);
            }
            
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