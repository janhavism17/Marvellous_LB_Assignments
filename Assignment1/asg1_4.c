#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int Check (int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;

    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int ivalue = 0;
    BOOL bRet = FALSE;

    printf("Enter number :");
    scanf("%d",&ivalue);

    bRet = Check(ivalue);

    if(bRet == TRUE)
    {
        printf("Divisiable by 5 \n");
    }
    else
    {
        printf("Not divisiable by 5 \n");

    }


    return 0;
}