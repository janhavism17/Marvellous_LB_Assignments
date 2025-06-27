#include <stdio.h>

typedef unsigned int UNIT;

void CheckBits(UNIT iNo, int pos1, int pos2)
{
    if (pos1 < 1 || pos1 > 32 || pos2 < 1 || pos2 > 32)
    {
        printf("Invalid bit positions! Must be between 1 and 32.\n");
        return;
    }

    UNIT mask1 = 1 << (pos1 - 1); // Create mask for pos1
    UNIT mask2 = 1 << (pos2 - 1); // Create mask for pos2

    int bit1 = (iNo & mask1) ? 1 : 0;
    int bit2 = (iNo & mask2) ? 1 : 0;

    printf("Bit at position %d is: %s\n", pos1, bit1 ? "ON" : "OFF");
    printf("Bit at position %d is: %s\n", pos2, bit2 ? "ON" : "OFF");
}

int main()
{
    UNIT iValue = 0;
    int pos1 = 0, pos2 = 0;

    printf("Enter the number:\n");
    scanf("%u", &iValue);

    printf("Enter first bit position (1-32):\n");
    scanf("%d", &pos1);

    printf("Enter second bit position (1-32):\n");
    scanf("%d", &pos2);

    CheckBits(iValue, pos1, pos2);

    return 0;
}