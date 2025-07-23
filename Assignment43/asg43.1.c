#include<stdio.h>

int WhiteSpaces(char *str)
{
    static int iCnt =0;

    if(*str != 0)
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        WhiteSpaces(str+1);
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the string:");
    scanf(" %[^\n]",arr);

    iRet = WhiteSpaces(arr);
    printf("The whiteSpaces are : %d\n",iRet);

    return 0;
}