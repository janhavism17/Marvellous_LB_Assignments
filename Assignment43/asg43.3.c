#include<stdio.h>

int Small(char *str)
{
    static int iCnt =0;

    if(*str != 0)
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
        Small(str+1);
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the string:");
    scanf(" %[^\n]",arr);

    iRet = Small(arr);
    printf("The Number of Small char are : %d\n",iRet);

    return 0;
}