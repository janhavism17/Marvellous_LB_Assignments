#include <stdio.h>

typedef unsigned int UNIT;

UNIT ToggleFirstLastNibble(UNIT iNo)
{
    UNIT iMask = 0xF000000F;  
    return iNo ^ iMask;       

}

int main()
{
    UNIT iValue = 0;
    UNIT iResult = 0;

    printf("Enter a number:\n");
    scanf("%u", &iValue);  

    iResult = ToggleFirstLastNibble(iValue);

    printf("Modified number after toggling first and last nibble: %u\n", iResult);
    printf("Hex format: 0x%X\n", iResult);  

    return 0;
}