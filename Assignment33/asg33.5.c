#include <stdio.h>

typedef unsigned int UNIT;

UNIT ToggleBitRange(UNIT iNo, int iStart, int iEnd)
{

    if (iStart < 1 || iStart > 32 || iEnd < 1 || iEnd > 32 || iStart > iEnd)
    {
        printf("Invalid range! Positions must be between 1 and 32 and Start <= End.\n");
        return iNo;  
    }

    UNIT mask = 0;

    for (int i = iStart; i <= iEnd; i++)
    {
        mask |= (1 << (i - 1));  
    }

    return iNo ^ mask; 
}

int main()
{
    UNIT iValue = 0, iResult = 0;
    int iStart = 0, iEnd = 0;

    printf("Enter the number:\n");
    scanf("%u", &iValue);

    printf("Enter starting bit position (1-32):\n");
    scanf("%d", &iStart);

    printf("Enter ending bit position (1-32):\n");
    scanf("%d", &iEnd);

    iResult = ToggleBitRange(iValue, iStart, iEnd);

    printf("Number after toggling bits from position %d to %d: %u\n", iStart, iEnd, iResult);
    printf("Hex format: 0x%X\n", iResult);

    return 0;
}