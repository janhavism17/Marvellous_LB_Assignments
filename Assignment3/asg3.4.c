#include <stdio.h>

void DisplayConvert( char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c -> %c\n", cValue, cValue - 32);
    }
    else if(cValue >= 'A' && cValue <= 'Z')
    {
         printf("%c -> %c\n", cValue, cValue + 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}