#include<stdio.h>

int CharCount(char *str)
{
    int i = 0;

    if(*str != 0)
    {
        i= 1+ CharCount(str +1);
        
    }

    return i;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the String:");
    scanf("%s",arr);
    iRet = CharCount(arr);

    printf("Sum:%d\n",iRet);
    return 0;
}