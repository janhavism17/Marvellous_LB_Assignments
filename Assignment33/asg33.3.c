#include <stdio.h>

typedef unsigned int UNIT;

void CheckHeaterStatus(UNIT iNo)
{
    UNIT iMask = 0x00000880; 
                            

    if ((iNo & iMask) != 0)
    {
        printf("Either 9th or 12th bit is ON.\n");
    }
    else
    {
        printf("Both 9th and 12th bits are OFF.\n");
    }
}

int main()
{
    UNIT iValue = 0;

    printf("Enter the number:\n");
    scanf("%u", &iValue);

    CheckHeaterStatus(iValue);

    return 0;
}